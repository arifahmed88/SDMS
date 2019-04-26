#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void info_table()
{
    int i,j,k=11;
    cord(0,11);
    printf("%c",201);
    for(i=1; i<149; i++)
    {
        cord(i,0+k);
        printf("%c",205);
    }
    cord(i,0+k);
    printf("%c",187);
    for(i=1+k; i<37+k; i++)
    {
        cord(0,i);
        printf("%c",186);
        cord(149,i);
        printf("%c",186);
    }
    cord(0,i+k);
    printf("%c",200);
    for(i=1; i<149; i++)
    {
        cord(i,37+k);
        printf("%c",205);
    }
    cord(i,37+k);
    printf("%c",188);
    for(i=12;i<37+k;i++)
    {
        cord(74,i);
        printf("%c",186);
    }
    cord(103,12);
    printf("INFORMATION TABLE");
}
