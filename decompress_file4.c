#include"header.h"
#include"prototype.h"
int decompress4(int fd, char* arr , int len)
{
        printf("IN %s\n",__func__);
        unsigned char ch,c,byte;
        int pos,i,index,ekey;
        printf("decompress4 file is:\n");
        pos=lseek(fd,0,SEEK_SET);
        ekey=open("decompress_file",O_WRONLY|O_CREAT);
        printf("pos is %d \n",pos);
        while(1)
        {
                read(fd,&ch,1);
                if(ch == 10)
                break;
                c = ch; 
                c = c >> 4;
                printf("hex value is %x \n",c);
                i = (int) c;
                byte = *(arr+i);
		printf("byte value is %c\n",byte);
                write(ekey,&byte,1);
                c = ch;
		c = c << 4;
		c = c >> 4;
                i = (int) c;
                byte = *(arr+i);
                printf("hex value is %x \n",c);
		printf("byte value is %c\n",*(arr+i));
                write(ekey,&byte,1);
        }
        return 0;       
}
