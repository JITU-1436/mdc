#include"header.h"
#include"prototype.h"
int open_cfile()
{
	printf("IN %s\n",__func__);
        int fd;
        fd = open("compress_file",O_RDONLY);
        printf(" fd=%d \n",fd);
        if(fd==-1)
        {
                perror("open");
                return -1;
        }
        return fd;
}
