#include<stdio.h>
#include<syslog.h>

int main(void)
{
    openlog("Jaylee", LOG_PID, LOG_USER);

    syslog(LOG_ERR, "Hello world %s", "jaylee");

    closelog();

    return 0;
}

