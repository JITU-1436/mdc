#include"header.h"
#include"prototype.h"
int main()
{
	printf("___MAIN_MENU___");
	int choice;
	while(1)
	{
		choice = main_menu();
		operation(choice);
	}
	return 0;
}
