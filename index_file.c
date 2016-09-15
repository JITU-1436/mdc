#include"header.h"
#include"prototype.h"
int index_file(char ch,char* arr,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		if(ch==*(arr+i))
		{
			return i;
		}
	}
	return 0;
}
