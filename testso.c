#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> // Include this header for environ

extern char **environ; // Declare extern environ

static void __attribute__((constructor))
initialize_env (void)
{
    char **env;
    fprintf(stderr, "Print debug\n", *env);
    env = environ;
    fprintf(stderr, "environ %p env %p\n", env, environ);
    for (env = environ; *env != 0; env++)
    {
        fprintf(stderr, "%s\n", *env);
    }
    return;
}
