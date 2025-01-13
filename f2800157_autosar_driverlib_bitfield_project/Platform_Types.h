/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  xxxxxx
 *
 *                This software is copyright protected and proprietary to xxx xxx GmbH.
 *                xxx xxx GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with xxx xxx GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Platform_Types.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  This file provides xxx
 *  
 *  -------------------------------------------------------------------------------------------------------------------
 *  MISRA VIOLATIONS
 *  -------------------------------------------------------------------------------------------------------------------
 *      
 *  
 *********************************************************************************************************************/

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* AUTOSAR Software Specification Document Version Information */
#define PLATFORM_AR_RELEASE_MAJOR_VERSION      (4u)
#define PLATFORM_AR_RELEASE_MINOR_VERSION      (0u)
#define PLATFORM_AR_RELEASE_REVISION_VERSION   (3u)

/* Component Version Information */
#define PLATFORM_SW_MAJOR_VERSION       (2u)
#define PLATFORM_SW_MINOR_VERSION       (4u)
#define PLATFORM_SW_PATCH_VERSION       (0u)

#define CPU_TYPE_8       8u
#define CPU_TYPE_16      16u
#define CPU_TYPE_32      32u

#define MSB_FIRST        0u  /* big endian bit ordering */
#define LSB_FIRST        1u  /* little endian bit ordering */

#define HIGH_BYTE_FIRST  0u  /* big endian byte ordering */
#define LOW_BYTE_FIRST   1u  /* little endian byte ordering */

#ifndef TRUE
  #define TRUE   1u
#endif

#ifndef FALSE
  #define FALSE  0u
#endif

#define CPU_TYPE         CPU_TYPE_32

#define CPU_BIT_ORDER    LSB_FIRST       /*little endian bit ordering*/

#define CPU_BYTE_ORDER   LOW_BYTE_FIRST  /*little endian byte ordering*/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef _Bool                 boolean;       /*        TRUE .. FALSE           */

typedef signed char           sint8;         /*      -32768 .. +32767          */
typedef unsigned char         uint8;         /*           0 .. 65535           */
typedef signed short          sint16;        /*      -32768 .. +32767          */
typedef unsigned short        uint16;        /*           0 .. 65535           */
typedef signed long           sint32;        /* -2147483648 .. +2147483647     */
typedef unsigned long         uint32;        /*           0 .. 4294967295      */

typedef signed char           sint8_least;   /* At least 7 bit + 1 bit sign    */
typedef unsigned char         uint8_least;   /* At least 8 bit                 */
typedef signed short          sint16_least;  /* At least 15 bit + 1 bit sign   */
typedef unsigned short        uint16_least;  /* At least 16 bit                */
typedef signed long           sint32_least;  /* At least 31 bit + 1 bit sign   */
typedef unsigned long         uint32_least;  /* At least 32 bit                */

typedef signed    long long  sint64;   /* -9223372036854775808 .. 9223372036854775807 */
typedef unsigned  long long  uint64;   /*                    0 .. 18446744073709551615 */

typedef float                 float32; /* 1.19209290e-38 .. 3.4028235e+38 */
typedef double                float64; /* 2.22507385e-308 .. 1.79769313e+308 */

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* PLATFORM_TYPES_H_ */

/**********************************************************************************************************************
 *  END OF FILE: Platform_Types.h
 *********************************************************************************************************************/
