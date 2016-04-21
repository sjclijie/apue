#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    pid_t pid;

    printf("[%d] Start! \n", getpid());

    //全缓冲模式，刷新缓冲，避免上一句重复输出
    fflush(NULL);

    pid = fork();

    if ( pid < 0){
        perror("fork()!");
        exit(1);
    } else if ( 0 == pid) { //child 
        printf("[%d] Child Process. \n", getpid());
    } else { //parent
        printf("[%d] Parent Process. \n", getpid());
    }

    sleep(1);
    puts("End!");

    return 0;
}
