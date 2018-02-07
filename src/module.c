#include <module.h>
#include <stdlib.h>

int return_42(void)
{
    return 42;
}

int return_43(void)
{
    return 43;
}

void has_memory_leak(int should_leak)
{
    void *mem = malloc(10);

    // if (!should_leak)
    // {
        // free(mem);
    // }
}
