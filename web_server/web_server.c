#include <stdio.h>

#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>

int create_web_server()
{
    pid_t systemPid;

    printf("여기서 Web Server 프로세스를 생성합니다.\n");

    if(!(systemPid = fork()))
        execl("/usr/local/bin/filebrowser", "filebrowser", "-p", "8282", (char *) NULL);

    return 0;
}
