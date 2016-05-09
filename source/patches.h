/*
*   patches.h
*/

#pragma once

#include "types.h"

/**************************************************
*                   Patches
**************************************************/
const u32 mpuPatch[3];       
const u16 nandRedir[2],
          sigPatch[2],
          writeBlock[2],
          writeBlockSafe[2];

/**************************************************
*                   Functions
**************************************************/
u8 *getProc9(u8 *pos, u32 size);
void getSigChecks(u8 *pos, u32 size, u32 *off, u32 *off2);
void *getReboot(u8 *pos, u32 size);
u32 getfOpen(u8 *proc9Offset, void *rebootOffset);
u16 *getFirmWrite(u8 *pos, u32 size);
u16 *getFirmWriteSafe(u8 *pos, u32 size);
u32 getLoader(u8 *pos, u32 *loaderSize);