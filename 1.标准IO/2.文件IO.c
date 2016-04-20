#include<stdio.h>
#include<error.h>
#include<string.h> 
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(void)
{
    /* FILE *fopen(const char *path, const char *mode); 打开文件  */
    /* int fclose(FILE *p); 关闭文件 */
    /* char *fgetc(char *s,int size, FILE *stream) 从stream中读取一个字符串填回到s所指向的空间 */
    /* szie_t fread(void *ptr, size_t size, size_t, memb, FILE *stream) 从stream中读取的数据填回到ptr所指向的位置  */
    /* size_t fwrite(const void *ptr, size_t size, size_t memb, FILE *stream); 从ptr读取数据写入到stream中*/

    /**
     * atoi 函数族
     *  atoi
     *  atol
     *  atoll
     *  atoq
     */

    /** 
     * printf 函数族
     *  printf   返回值表示成功打印的有效字符的数量,不包括\0
     *  fprintf  
     *  sprintf  将数字转换成字符串
     *  snprintf( str, size, format)
     */

    /**
     *  scanf 函数族
     *      fscanf
     *      sscanf
     *      scanf
     */

    /**
     * fseek(FILE *stream, long offset, int whence)
     *  fseek(fp, -10, SEEK_CUR); //从当前位置向前偏移10个字节
     *  fseek(fp, 2GB, SEEK_SET); //制造一个空洞文件
     *  fseek(fp, 0, SEEK_END); //指针移动到文件尾部
     * fgetpos
     * fsetops
     * ftell(FILE *stream);
     * rewind(FILE *stream)
     */

    /**
     * 仅支持GUN标准
     * ssize_t getline(char **lineptr, size_t *n, FILE *stream)    一次性获取一行数据
     */
    
    char *str = "123abc456";

    printf("%d\n", atoi(str));

    return 0;
}
