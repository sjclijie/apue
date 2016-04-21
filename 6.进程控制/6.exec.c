#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<sys/types.h>

int main(void)
{
    pid_t pid;

    puts("Begin!");

    fflush(NULL);

    pid = fork();
    
    if ( pid < 0 ) {
        perror("fork()");
        exit(1);
    } else if ( pid == 0) {
        execl("/bin/date", "date", "+%F", NULL);
        perror("execl()");
        exit(1);
    }

    wait(NULL);

    puts("End!");

    return 0;
}
