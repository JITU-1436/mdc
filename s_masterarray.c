#include"header.h"
#include"prototype.h"
int s_masterarray(char *arr ,int i)
{

        int ekey;
        ekey=open("new",O_WRONLY|O_CREAT);
        printf(" ekey=%d\n",ekey);
        if(ekey==-1)
        {
                printf("open in file error");
                return 0;
        }
        write(ekey,arr,i);
}

