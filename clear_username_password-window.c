#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void clear_username_password_window()
{
    int i,j;
    for(i=0;i<150;i++)
    {
        for(j=6;j<=11;j++)
        {
            cord(i,j);
            printf(" ");
        }
    }
}
