#include <stdint.h>

#include "typedefs.h"

#ifndef __GCN_H__
#define __GCN_H__

#define CARD_SLOT_A 0
#define CARD_SLOT_B 1

#define MEM1_START 0x80000000
#define MEM1_END   0x81800000
// The area beyond ArenaHi is used by system
// and should not be modified
// TODO version?
#define ArenaHi    0x817FEEA0

typedef struct CARDFileInfo
{
  s32 chan;
  s32 fileNo;

  s32 offset;
  s32 length;
  u16 iBlock;
} CARDFileInfo;

s32 CARDOpen(s32 slot, const char *fileName, CARDFileInfo *fileInfo);
s32 CARDRead(CARDFileInfo *fileInfo, void *addr, s32 length, s32 offset);
s32 CARDClose(CARDFileInfo *fileInfo);
s32 CARDUnmount(s32 chan);

#endif
