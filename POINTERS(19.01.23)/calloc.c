#include <stdio.h>
#include <stdlib.h>

/* Calloc()-Allocate multiple blocks of memory dynamically
Calloc needs two args instead of one
Syntax-

void *calloc(<size of block>,<size of each block>)

Memory allocated by calloc is initialised with 0 whereas memory allocated by malloc is initialised by garbage value
Both return null when sufficient memory is not available in heap
calloc stands for CLEAR ALLOCATION
malloc stands for MEMORY ALLOCATION

realloc()- realloc is used to change the size of memory block without losing old data
void *realloc(<previous pointer>,<new size>)
On failure it also returns NULL
Newly allocated bytes are uninitialized
free()-releases the dynamically allocated memory in heap
void free(ptr)
returns nothing

*/