/*
 * File:   tools.h
 * Author: KRIK
 *
 * Created on 16 ������ 2011 �., 2:30
 */

#ifndef _TOOLS_H
#define _TOOLS_H
#include "ed64io_types.h"

void dma_read_s(void* ram_address, unsigned long pi_address, unsigned long len);
void dma_write_s(void* ram_address,
                 unsigned long pi_address,
                 unsigned long len);
void dma_write_s(void* ram_address,
                 unsigned long pi_address,
                 unsigned long len);
void sleep(u32 ms);
void dma_write_sram(void* src, u32 offset, u32 size);
void dma_read_sram(void* dest, u32 offset, u32 size);

#endif /* _TOOLS_H */
