#include<stdio.h>
#include<dlfcn.h>

int main(int argc, char **argv)
{
    char *s = dlopen("/usr/local/lib/libluajit-5.1.so", 1);
    printf("%p", s);
    return 0;
}
