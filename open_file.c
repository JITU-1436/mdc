#include"header.h"
#include"prototype.h"
int open_file()
{
        int fd;
        fd = open("hello",O_RDONLY);
        printf(" fd=%d \n",fd);
        if(fd == -1)
        {
                perror("open");

                return -1;
        }
        return fd;
}
