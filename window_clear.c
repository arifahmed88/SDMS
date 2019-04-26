#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void window_clear()
{
    int i,j;
    for( i=12;i<48;i++)
    {
       for( j=75;j<149;j++)
       {
           cord(j,i);
           printf(" ");
       }
    }
}
