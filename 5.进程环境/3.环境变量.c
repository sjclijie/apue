#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{

    putenv("PATH=/usr/local/bin");
    //setenv("PATH", "/aaa", 0); //如果PATH不存在则设置, 第三个参数为1时，会覆盖

    char *user = getenv("USER");
    char *path = getenv("PATH");

    printf("User: %s \n", user);
    printf("Path: %s \n", path);

    return 0;
}
