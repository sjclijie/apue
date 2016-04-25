#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<fcntl.h>
#include<error.h>
#include<errno.h>

#include<sys/types.h>
#include<sys/stat.h>

#define BUFSIZE 10          //流量速率
#define MAXTOKEN 1024       //令牌上限

static volatile int token = 0; //积攒的令牌数量

static void alarm_handler(int s)
{
    alarm(1);

    if (token < MAXTOKEN) {
        token++;
    }
}

int main(int argc, char **argv)
{
    int fd = -1;
    char buf[BUFSIZE] = "";
    size_t readsize = -1;
    size_t writesize = -1;
    size_t off = 0;
    
    /* {{{ 参数检查*/
    if ( argc != 2){
        fprintf(stderr, "Usage %s <filepath>\n", argv[0]);
        return 1;
    }
    /* }}} */

    do {
        fd = open(argv[1], O_RDONLY);
        if (fd < 0){
            if (EINTR != errno){
                perror("open()");
                goto e_open;
            }
        }
    } while( fd < 0 );

    loop = 1;

    while(1)
    {
        while(loop)
        {
            pause();
        }

        loop = 1;

        while( (readsize = read(fd, buf, BUFSIZE) ) < 0 )
        {
            if (readsize < 0)
            {
                if (EINTR == errno){
                    continue;
                }
                perror("read()");
                goto e_read;
            }
        }

        if (!readsize){
            break;
        }

        off = 0;

        do {
            writesize = write(1, buf + off , readsize);
            off += writesize;
            readsize -= readsize;
        } while( readsize > 0 );
    }

    close(fd);

    return 0;

e_read:
    close(fd);

e_open:
    return 1;
}



