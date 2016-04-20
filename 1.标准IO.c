#include<apue.h>


/**
 *
 * 读到最后一个字节时，getc返回常理EOF，该常量在<stdio.h>中定义
 *
 * 标准IO常量stdio和stdout也在<stdio.h>中定义
 *
 */

int main()
{

    int c;

    while( (c=getc(stdin)) != EOF ){
    
        if (putc(c, stdout) == EOF) {
            err_sys("OutPut Error");
        }
    }

    if ( ferror(stdin) ){
    
        err_sys("Input Error");
    }

    return 0;
}
