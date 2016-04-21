#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<sys/wait.h>
#include<sys/types.h>

int main(void)
{
    pid_t pid;
    int i = 0;

    for( ; i<10; i++)
    {
        fflush(NULL);
        pid = fork();

        if ( pid < 0 ) {
            perror("fork()");
        } else if ( pid == 0) {
            printf("PID：[%d] \n", getpid()); 
            exit(0);
        }
    }

    for( i=0; i<10; i++) {
        wait(NULL);
    }

    return 0;
}

