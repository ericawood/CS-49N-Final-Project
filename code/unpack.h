#ifndef __UNPACK_H__
#define __UNPACK_H__

#include "rpi.h"
#include "color.h"

unsigned unpack(Color* col, unsigned *joy, uint32_t data);

unsigned unpack_16(Color* col, unsigned *joy, uint16_t data);

#endif