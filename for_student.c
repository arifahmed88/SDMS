#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

void for_student(long long int i_d)
{
    ///i_d to str///
    char str[50];
    int a=0,b,c;
    while(i_d!=0)
    {

        str[a]=(i_d%10)+48;
        a++;
        i_d=i_d/10;
    }
    str[a]='\0';
    for (b=0; b<a/2; b++)
    {
        char tmp;
        tmp=str[b];
        str[b]=str[a-b-1];
        str[a-b-1]=tmp;
    }
    int choice,i;
    cord(10,20);
    printf("Please enter your choice.");
    cord(10,23);
    printf("1.Information");
    cord(10,26);
    printf("2.Marksheet");
    cord(10,29);
    printf("3.About");
    cord(10,32);
    printf("4.Exit");
    cord(10,35);
    printf("Choice:-");
    while(1)
    {
        for(i=18; i<35; i++)
        {
            cord(i,35);
            printf(" ");
        }
        cord(18,35);
        scanf("%d",&choice);
        if(choice==4) return;
        else if(choice==1)
        {
            info(str);
        }
        else if(choice==2)
        {
            stu_mark(str);
        }
        else if(choice==3)
        {
            about();
        }
    }

}

