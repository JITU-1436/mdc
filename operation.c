#include"header.h"
#include"prototype.h"
int operation(int choice)
{
        switch(choice)
        {
                case 1:
                        compress();
                        break;
                case 2:
                        decompress();
                        break;
                case 333:
                        exit_file();
                default:
                        printf("enter the correct choice:\n");
                        break;
        }
}
