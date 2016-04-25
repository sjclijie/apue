#include<signal.h>
#include<unistd.h>

static void handler(int s)
{
    write(1, "!", 1);
}

int main(void)
{
    int i = 0;

    //signal(SIGINT, SIG_IGN);
    signal(SIGINT, handler);

    /**
     *
     * >0 发送信号给进程ID
     * ==0 发送信息给当前所在进程组的所有进程
     * ==-1 发送信息给当前进程有权向它们发送信号的所有进程。广播信号
     * <-1 将PID的绝对值作为组ID，给这个组中的所有进程发送信号
     */
    kill(0, SIGINT);

    for( ; i<10; i++)
    {
        write(1, "*", 1);
        sleep(1);
    }
    
    //阻塞一个进程
    pause();

    return 0;
}
