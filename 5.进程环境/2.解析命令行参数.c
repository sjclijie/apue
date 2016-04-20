#include<stdio.h>
#include<unistd.h>

int main(int argc, char **argv)
{
    printf("参数个数: %d \n", argc);

    //printf("%s \n", *argv);
    //printf("%s \n", *(argv+1));

    while( *argv != '\0' )
    {
        printf("%s \n", *argv);
        *argv++;
    }

    printf("\n================= \n");

    int oc;

    while( (oc = getopt(argc, argv, "ngl:")) != -1 )
    {
        printf("%c \n", oc);
        switch(oc)
        {
            case 'n':
                printf("My Name is nnn\n");
                break;
            case 'g':
                printf("My Name is GGGG\n");
                break;
            case 'l':
                printf("My Name is %s\n", optarg);
                break;
            case '?':
                printf("无效选项: %c \n", optopt);
                break;
            case ':':
                printf("缺少选项参数 \n");
                break;
        }
        //printf("i: %d \n", oc);
    }



    return 0;
}
