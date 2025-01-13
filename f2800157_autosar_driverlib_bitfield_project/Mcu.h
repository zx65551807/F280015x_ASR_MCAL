#ifndef MCU_H
#define MCU_H

/* ========================================
 *           INCLUDES
 * ======================================== */
#include "Std_Types.h"
#include "Platform_Types.h"
#include "Compiler.h"

/* ========================================
 *       VERSION INFORMATION
 * ======================================== */
#define MCU_VENDOR_ID                 (123U)       /* Vendor ID (example) */
#define MCU_MODULE_ID                 (101U)       /* Module ID (example) */
#define MCU_SW_MAJOR_VERSION          (1U)
#define MCU_SW_MINOR_VERSION          (0U)
#define MCU_SW_PATCH_VERSION          (0U)
#define MCU_AR_RELEASE_MAJOR_VERSION  (4U)
#define MCU_AR_RELEASE_MINOR_VERSION  (4U)
#define MCU_AR_RELEASE_PATCH_VERSION  (0U)

/* ========================================
 *          TYPE DEFINITIONS
 * ======================================== */

/* PLL source */
typedef enum {
    PLL_XTAL,    /* external crystal */
    PLL_INTOSC   /* internal INTOSC */
} Mcu_PllSourceType;

/* PLL source */
typedef enum {
    PLL_XTAL,    /* external crystal */
    PLL_INTOSC   /* internal INTOSC */
} Mcu_PllEnableType;

typedef struct
{
  const Mcu_PllSourceType  McuPllSource;
  const uint32  DeviceOscsrcFreq;
  const uint16  SysctlIMULT;
  const uint16  SysctlREFDIV;
  const uint16  SysctlODIV;
  const uint16  SysctlSYSDIV;
  const Mcu_PllEnableType  SysctlPllEnable;
  const Mcu_DCCNumType SysctlDCCNum;
} Mcu_ClockConfigType;

// === ASR Required Type===

/**
 * @brief Type for PLL status.
 */
typedef enum {
    MCU_PLL_LOCKED,    /**< PLL is locked. */
    MCU_PLL_UNLOCKED   /**< PLL is unlocked. */
} Mcu_PllStatusType;

/**
 * @brief Type for reset reason.
 */
typedef enum {
    MCU_RESET_UNDEFINED,    /**< Reset reason is undefined. */
    MCU_RESET_POWER_ON,     /**< Power-on reset. */
    MCU_RESET_WATCHDOG,     /**< Watchdog reset. */
    MCU_RESET_SOFTWARE,     /**< Software reset. */
    MCU_RESET_EXTERNAL      /**< External reset. */
} Mcu_ResetType;

/**
 * @brief Raw reset reason type.
 */
typedef uint32 Mcu_RawResetType;

/**
 * @brief Type for RAM section.
 */
typedef uint8 Mcu_RamSectionType;

/**
 * @brief Type for clock settings.
 */
typedef uint8 Mcu_ClockType;

/**
 * @brief Type for MCU mode.
 */
typedef uint8 Mcu_ModeType;

/**
 * @brief Type for version info.
 */
typedef Std_VersionInfoType Mcu_VersionInfoType;

/**
 * @brief Type for RAM state.
 */
typedef enum {
    MCU_RAMSTATE_INVALID,    /**< RAM is not initialized. */
    MCU_RAMSTATE_VALID       /**< RAM is initialized and valid. */
} Mcu_RamStateType;

/* Structure definition for MCU driver Configuration
   Mcu_ConfigType is used to store the configuration data of the MCU Driver
*/
typedef struct
{
  /* Pointer to clock setting configuration */
  const Mcu_ClockConfigType  *McuClockSettingPtr;
  /* Pointer to RAM Section configuration */
  const Mcu_RamConfigType    *McuRamCfgPtr;
  /* Pointer to Low power mode configuration */
  const Mcu_LowPowerModeType *McuLowPowerModeCfgPtr;
} Mcu_ConfigType;
/* ========================================
 *          FUNCTION PROTOTYPES
 * ======================================== */
#define MCU_START_SEC_CODE
#include "MemMap.h"

/**
 * @brief Initializes the MCU module.
 * @param ConfigPtr Pointer to MCU configuration.
 */
FUNC(void, MCU_CODE) Mcu_Init(P2CONST(Mcu_ConfigType, AUTOMATIC, MCU_APPL_DATA) ConfigPtr);

/**
 * @brief Initializes a RAM section.
 * @param RamSection Identifier of the RAM section.
 * @return Status of the operation.
 */
FUNC(Std_ReturnType, MCU_CODE) Mcu_InitRamSection(VAR(Mcu_RamSectionType, AUTOMATIC) RamSection);

/**
 * @brief Initializes a clock setting.
 * @param ClockSetting Identifier of the clock setting.
 * @return Status of the operation.
 */
FUNC(Std_ReturnType, MCU_CODE) Mcu_InitClock(VAR(Mcu_ClockType, AUTOMATIC) ClockSetting);

/**
 * @brief Distributes the PLL clock.
 * @return Status of the operation.
 */
FUNC(Std_ReturnType, MCU_CODE) Mcu_DistributePllClock(void);

/**
 * @brief Gets the status of the PLL.
 * @return Current PLL status.
 */
FUNC(Mcu_PllStatusType, MCU_CODE) Mcu_GetPllStatus(void);

/**
 * @brief Gets the reason for the last reset.
 * @return Reset reason.
 */
FUNC(Mcu_ResetType, MCU_CODE) Mcu_GetResetReason(void);

/**
 * @brief Gets the raw reset value.
 * @return Raw reset value.
 */
FUNC(Mcu_RawResetType, MCU_CODE) Mcu_GetResetRawValue(void);

/**
 * @brief Performs a software reset.
 */
FUNC(void, MCU_CODE) Mcu_PerformReset(void);

/**
 * @brief Sets the MCU mode.
 * @param McuMode Identifier of the mode.
 */
FUNC(void, MCU_CODE) Mcu_SetMode(VAR(Mcu_ModeType, AUTOMATIC) McuMode);

/**
 * @brief Gets the version information of the MCU module.
 * @param versioninfo Pointer to version information structure.
 */
FUNC(void, MCU_CODE) Mcu_GetVersionInfo(P2VAR(Mcu_VersionInfoType, AUTOMATIC, MCU_APPL_DATA) versioninfo);

/**
 * @brief Gets the state of the RAM.
 * @return RAM state.
 */
FUNC(Mcu_RamStateType, MCU_CODE) Mcu_GetRamState(void);

#define MCU_STOP_SEC_CODE
#include "MemMap.h"

#endif /* MCU_H */
