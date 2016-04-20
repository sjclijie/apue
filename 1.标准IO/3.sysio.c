#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void)
{
    int fd, size;

    char s[] = "This is Linux Programmer!";

    char buffer[78];
    //char *buffer;

    fd = open("./test.txt", O_WRONLY | O_CREAT);

    write(fd, s, sizeof(s));

    close(fd);

    fd = open("./test.txt", O_RDONLY);

    size = read(fd, buffer, 79);

    close(fd);

    printf("共读取了%d字节, 数据:%s \n", size, buffer);
    
    return 0;
}
