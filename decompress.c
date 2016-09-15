#include"header.h"
#include"prototype.h"
int decompress()
{
	printf("%s\n",__func__);
	int cl,len,ret,fd;
	char *arr;
	fd=open_file();
        arr=create_masterarray(fd);
        len=strlen(arr);
        printf("string length= %d\n",len);
	cl = c_length(len);
	close(fd);
	fd = open_cfile();
	switch(cl)
	{
		case 2:
			ret=decompress2(fd,arr,len);
			if(ret<0)
			printf("compress2 failed");
			break;
		case 3:
			ret=decompress3(fd,arr,len);
			if(ret<0)
			printf("compress3 failed");
			break;
		case 4:
			ret=decompress4(fd,arr,len);
			if(ret<0)
			printf("compress4 failed");
			break;
		case 5:
			ret=decompress5(fd,arr,len);
			if(ret<0)
			printf("compress5 failed");
			break;
		case 6:
			ret=decompress6(fd,arr,len);
			if(ret<0)
			printf("compress6 failed");
			break;
		case 7:
			ret=decompress7(fd,arr,len);
			if(ret<0)
			printf("compress2 failed");
			break;
		default:
			printf("incorrect code length\n");
	}
	close(fd);
	return 0;
}
