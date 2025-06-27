#ifndef __M5OPS_H__
#define __M5OPS_H__

#include <stdint.h>

/**
 * Exit gem5 simulation
 */
static inline void m5_exit(void)
{
    printf("m5 exit\n");
    asm volatile(
        "mov $0x1, %%rax\n\t"
        "out %%al, $0x64"
        :
        :
        : "%rax", "memory"
    );
}

/**
 * Dump gem5 stats
 */
static inline void m5_dump_stats(void)
{
    asm volatile(
        "mov $0x5, %%rax\n\t"
        "out %%al, $0x64"
        :
        :
        : "%rax", "memory"
    );
}

/**
 * Reset gem5 stats
 */
static inline void m5_reset_stats(void)
{
    asm volatile(
        "mov $0x4, %%rax\n\t"
        "out %%al, $0x64"
        :
        :
        : "%rax", "memory"
    );
}

/**
 * Dump and Reset stats
 */
static inline void m5_dump_reset_stats(void)
{
    asm volatile(
        "mov $0x6, %%rax\n\t"
        "out %%al, $0x64"
        :
        :
        : "%rax", "memory"
    );
}

#endif // __M5OPS_H__
