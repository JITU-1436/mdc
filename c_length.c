#include"header.h"
#include"prototype.h"
int c_length(int i)
{
	printf("%s",__func__);
        int cl;
        if(i<4)
        {
                cl=2;
                printf("cl=%d",cl);
        }

        else if(i<8)
        {
                cl=3;
                printf("cl=%d",cl);
        }
        else if(i<16)
        {
                cl=4;
                printf("cl=%d",cl);
        }
        else if(i<32)
        {
                cl=5;
                printf("cl=%d",cl);
        }
        else if(i<64)

        {
                cl=6;
                printf("cl=%d",cl);
        }
        else if(i<128)
        {
                cl=7;
                printf("cl=%d",cl);
        }
        else if(i<256)
        {
                cl=8;
                printf("cl=%d",cl);
        }
}
