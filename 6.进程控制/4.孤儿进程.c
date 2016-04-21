#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char **argv)
{
    pid_t pid;

    int i = 0;

    for( ; i<10; i++)
    {
        fflush(NULL);
        pid = fork();

        if ( pid < 0){
            perror("fork()"); 
            exit(1);
        } else if ( pid == 0) {
            printf("pid = %d \n", getpid());
            sleep(100);
        }
    }


    return 0;
}
