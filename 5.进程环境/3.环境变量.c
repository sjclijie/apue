#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{

    putenv("PATH=/usr/local/bin");

    char *user = getenv("USER");
    char *path = getenv("PATH");

    printf("User: %s \n", user);
    printf("Path: %s \n", path);

    return 0;
}
