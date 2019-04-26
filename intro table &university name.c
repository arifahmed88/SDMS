#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void introduction()
{
    int i,j;
    cord(0,0);
    printf("%c",201);
    for(i=1; i<149; i++)
    {
        cord(i,0);
        printf("%c",205);
    }
    cord(i,0);
    printf("%c",187);
    for(i=1; i<5; i++)
    {
        cord(0,i);
        printf("%c",186);
        cord(149,i);
        printf("%c",186);
    }
    cord(0,i);
    printf("%c",200);
    for(i=1; i<149; i++)
    {
        cord(i,5);
        printf("%c",205);
    }
    cord(i,5);
    printf("%c",188);
    int k=37;
    cord(26+k ,1);
    printf("STUDENT RECORD SYSTEM");
    cord(20+k ,2);
    printf("University of Chittagong,Chittagong");
    cord(29+k ,3);
    printf("Estd.: 1966");

}
