#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    if (argc < 2)
    {
        fprintf(stderr, "Missing argument\n");
        return EXIT_FAILURE;
    }
    else 
    {
        fprintf(stderr, "Trying to load with RTLD_DEEPBIND %s\n", argv[1]);
    }

   void * handle = dlopen(argv[1], RTLD_DEEPBIND);

   fprintf(stderr, "Library loaded correctly.\n");
   return EXIT_SUCCESS;
}
