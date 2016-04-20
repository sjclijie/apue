#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void func1(void)
{
    puts("func1");
}

void func2(void)
{
    puts("func2");
}

void func3(void)
{
    puts("func3");
}

int main(void)
{

    puts("Begin");
    atexit(func1);
    atexit(func2);
    atexit(func3);

    puts("End");
    _exit(2);  //不会调用任何钩子程序
    //return 0;
}
