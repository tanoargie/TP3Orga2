/* ** por compatibilidad se omiten tildes **
================================================================================
 TRABAJO PRACTICO 3 - System Programming - ORGANIZACION DE COMPUTADOR II - FCEN
================================================================================

    Definiciones globales del sistema.
*/

#ifndef __DEFINES_H__
#define __DEFINES_H__

/* Tipos basicos */
/* -------------------------------------------------------------------------- */
#define NULL                    0
#define TRUE                    0x00000001
#define FALSE                   0x00000000
#define ERROR                   1
#define KERNEL_DIRECTORY        0x27000

typedef unsigned char  uchar;
typedef unsigned short ushort;
typedef unsigned int   uint;

/* Constantes basicas */
/* -------------------------------------------------------------------------- */
#define PAGE_SIZE               0x00001000
#define TASK_SIZE               4096
#define KERNEL_PAGE_DIR         0x00027000
#define KERNEL_PAGE_TAB         0x00028000

#define BOOTSECTOR              0x00001000 /* direccion fisica de comienzo del bootsector (copiado) */
#define KERNEL                  0x00001200 /* direccion fisica de comienzo del kernel */

#define DEBUG_REGISTROS_X 26
#define DEBUG_REGISTROS_Y 9
#define DEBUG_INFO_X 25
#define DEBUG_INFO_Y 7

#define DEBUG_CORNER_X 24
#define DEBUG_CORNER_Y 6

#define DEBUG_WIDTH 42
#define DEBUG_HEIGHT 36

#define VIDEO                   0x000B8000 /* direccion fisica del buffer de video */

/* Indices en la gdt */
/* -------------------------------------------------------------------------- */
#define GDT_COUNT 30
#define EMPIEZAN_TSS 15

#define GDT_IDX_NULL_DESC           0
#define GDT_DATA_USER               8
#define GDT_DATA_KERNEL             9
#define GDT_CODE_USER               10
#define GDT_CODE_KERNEL             11
#define GDT_VIDEO                   12
#define GDT_TSS_IDLE                13
#define GDT_TSS_INICIAL             14
#define GDT_TSS_A0                  15
#define GDT_TSS_A1                  16
#define GDT_TSS_A2                  17
#define GDT_TSS_A3                  18
#define GDT_TSS_A4                  19
#define GDT_TSS_A5                  20
#define GDT_TSS_A6                  21
#define GDT_TSS_A7                  22
#define GDT_TSS_B0                  23
#define GDT_TSS_B1                  24
#define GDT_TSS_B2                  25
#define GDT_TSS_B3                  26
#define GDT_TSS_B4                  27
#define GDT_TSS_B5                  28
#define GDT_TSS_B6                  29
#define GDT_TSS_B7                  30


/* Offsets en la gdt */
/* -------------------------------------------------------------------------- */
#define GDT_OFF_NULL_DESC           (GDT_IDX_NULL_DESC      << 3)

/* Selectores de segmentos */
/* -------------------------------------------------------------------------- */

void* error();

#define ASSERT(x) while(!(x)) {};


#endif  /* !__DEFINES_H__ */
