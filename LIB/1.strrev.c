#include<stdio.h>

char *strrev( char *s ){

    char *h, *t;
    char c;

    h = s;
    t = s;

    while(*(t++)){}
    t--; //回退最后一个++
    t--; //去掉最后一个\0

    //t = s + strlen(s) -1;

    printf("h=%p, t=%p \n", h, t);
    
    while( h < t ) {
        c = *h;
        *(h++) = *t;
        *(t--) = c;
    }

    return s;
}

int main(int argc, char **argv)
{

    char s1[] = "123456";
    char s2[] = "helloworld";

    printf("%s \n", strrev(s1));
    printf("%s \n", strrev(s2));

    return 0;
}
