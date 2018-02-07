#ifndef MODULE_INCLUDED
#define MODULE_INCLUDED

int return_42(void);
int return_43(void);

// Leaks if should_leak == 1
// Does not leak if should_leek == 0
void has_memory_leak(int should_leak);

#endif
