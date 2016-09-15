#include"header.h"
#include"prototype.h"
int compress()
{
	printf("%s\n",__func__);
	int cl,len,ret,fd;
	char *arr;
	fd=open_file();
        arr=create_masterarray(fd);
	len=strlen(arr);
	printf("string length= %d\n",len);
	s_masterarray(arr,len);	
	cl=c_length(len);
	switch(cl)
	{
		case 2:
			ret=compress2(fd,arr,len);
			if(ret<0)
			printf("compress2 failed");
			break;
		case 3:
			ret=compress3(fd,arr,len);
			if(ret<0)
			printf("compress3 failed");
			break;
		case 4:
			ret=compress4(fd,arr,len);
			if(ret<0)
			printf("compress4 failed");
			break;
		case 5:
			ret=compress5(fd,arr,len);
			if(ret<0)
			printf("compress5 failed");
			break;
		case 6:
			ret=compress6(fd,arr,len);
			if(ret<0)
			printf("compress6 failed");
			break;
		case 7:
			ret=compress7(fd,arr,len);
			if(ret<0)
			printf("compress2 failed");
			break;
		default:
			printf("incorrect code length\n");
	}
	return 0;
}
