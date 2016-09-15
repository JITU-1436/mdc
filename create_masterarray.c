#include"header.h"
#include"prototype.h"
char* create_masterarray(int fd)
{
        int i,count=1;
        int j;
        char ch, *arr= NULL;
        arr=(char*)realloc(arr,i+1);
        int flag=0;
        i=0;
        while(count!=0)
        {
                count =read(fd,&ch,1);
         //       printf("%d \n",count);   
                if(ch==10)
                break;
                for(j=0;j<i;j++)
                {
                         if( ch==*(arr+j))
                        {
                                flag = 1;
                                break;
                        }
                }

                if(flag==0)
                {
                *(arr+i) = ch;
                i++;
                }
                flag=0;

        }
        printf("%s\n",arr);
        return arr;
	close(fd);
}

