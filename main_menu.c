#include"header.h"
#include"prototype.h"
int main_menu()
{
        printf("In %s:\n",__func__);
        int choice;
	while(1)
	{
        printf(" enter the choice\n");
        printf("1:compress the file\n");
        printf("2: decompress the comoress file\n");
        printf("333:if you want to exit then press three\n");
	scanf("%d",&choice);
        return choice;
	}
}

