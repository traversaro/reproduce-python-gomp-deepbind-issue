#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> // Include this header for environ

extern char **environ; // Declare extern environ

static void __attribute__((constructor))
initialize_env (void)
{
    char **env;
    fprintf(stderr, "Print debug\n");
    env = environ;
    fprintf(stderr, "environ %p &environ %p\n", environ, &environ);
    // Create segfault in case environ is NULL, to easily  detect platform affected by the bug
    char *environ_deref = *environ;
    return;
}
