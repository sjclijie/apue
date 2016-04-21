#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char **argv)
{
    pid_t pid = getpid();
    pid_t ppid = getppid();

    printf("当前进程ID：%d \n", pid);
    printf("父进程ID：%d \n", ppid);

    return 0;
}
