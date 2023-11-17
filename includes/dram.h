#ifndef DRAM_H
#define DRAM_H

#include <stdint.h>

#define DRAM_SIZE 1024*1024*128
#define DRAM_BASE 0x80000000

typedef struct DRAM {
	uint8_t *mem; // due to size of ram, use malloc(), or just set it back to 1mb
} DRAM;

uint32_t dram_load(DRAM* dram, uint64_t addr, uint64_t size);
void dram_store(DRAM* dram, uint64_t addr, uint64_t size, uint64_t value);

#endif