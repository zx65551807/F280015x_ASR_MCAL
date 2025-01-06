//###########################################################################
//
// FILE:    hw_otp.h
//
// TITLE:   Definitions for the OTP registers.
//
//###########################################################################
// $Copyright:
// Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//###########################################################################

#ifndef HW_OTP_H
#define HW_OTP_H

//*************************************************************************************************
//
// The following are defines for the OTP register offsets
//
//*************************************************************************************************
#define OTP_O_UID_PSRAND0    0x0U   // UID Psuedo-random 160 bit number
#define OTP_O_UID_PSRAND1    0x2U   // UID Psuedo-random 160 bit number
#define OTP_O_UID_PSRAND2    0x4U   // UID Psuedo-random 160 bit number
#define OTP_O_UID_PSRAND3    0x6U   // UID Psuedo-random 160 bit number
#define OTP_O_UID_PSRAND4    0x8U   // UID Psuedo-random 160 bit number
#define OTP_O_UID_UNIQUE0    0xAU   // UID Unique 64 bit number
#define OTP_O_UID_UNIQUE1    0xCU   // UID Unique 64 bit number
#define OTP_O_UID_CHECKSUM   0xEU   // UID Checksum




#endif
