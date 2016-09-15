#include"header.h"
#include"prototype.h"
int compress4(int fd, char* arr , int len)
{
	printf("%s",__func__);
	int pos,index,ekey;
	unsigned char ch,c,byte;
	printf("compress file4 is:\n");
	pos=lseek(fd,0,SEEK_SET);
	ekey=open("compress_file",O_WRONLY|O_CREAT);
	printf("pos is %d",pos);
	while(1)
	{
		if(ch == 10)
		{	printf("end of line:\n");
			break;
		}
		byte=byte^byte;
		read(fd,&ch,1);
		index=index_file(ch,arr,len);
		printf("index is: %d\n",index);
		c = (char) index;
		c=c<<4;
		byte=byte|c;
		read(fd,&ch,1);
		index=index_file(ch,arr,len);
		printf("index : %d\n",index);
		c = (char) index;
		c = c << 4;
		c = c >> 4;
		byte=byte|c;	
		printf("hex value is %x \n",byte);	
		write(ekey,&byte,1);
	}
	byte = byte ^ byte;
	byte = byte | 0x0A;
	write(ekey,&byte,1);
	close(fd);
	return 0;
}

