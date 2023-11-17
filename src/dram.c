#include "../includes/dram.h"
#include <stdio.h>
#include <stdlib.h>

void dram_init(DRAM* dram) {
    dram->mem = malloc(DRAM_SIZE);
}