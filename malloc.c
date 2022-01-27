#include <stddef.h>
#include <stdio.h>

static unsigned char our_memory[1024 * 1024]; //reserve 1 MB for malloc
static size_t next_index = 0;

void *malloc(size_t sz)
{
    void *mem;

    if(sizeof our_memory - next_index < sz)
        return NULL;

    mem = &our_memory[next_index];
    next_index += sz;
    fprintf(stderr, "Total bytes allocated so far: %ld\n", next_index);
    return mem;
}

void free(void *mem)
{
  //nothing is freed
}
