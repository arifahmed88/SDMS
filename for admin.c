#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

void admin()
{
    int choice,i;
    cord(10,15);
    printf("Please enter your choice.");
    cord(10,18);
    printf("1.Add Student.");
    cord(10,21);
    printf("2.Search Student");
    cord(10,24);
    printf("3.Delete Student Record");
    cord(10,27);
    printf("4.Modify Student Record.");
    cord(10,30);
    printf("5.Change Admin Username and password");
    cord(10,33);
    printf("6.Marksheet");
    cord(10,36);
    printf("7.About");
    cord(10,39);
    printf("8.Exit.");
    cord(10,42);
    printf("Choice:-");
    while(1)
    {
        for(i=18; i<35; i++)
        {
            cord(i,42);
            printf(" ");
        }
        cord(18,42);
        scanf("%d",&choice);
        if(choice==8) return;
        else if(choice==1)
        {
            add_student();
        }
        else if(choice==2)
        {
            search_student();
        }
        else if(choice==3)
        {
            delete_student();
        }
        else if(choice==4)
        {
            modify();
        }
        else if(choice==5)
        {
            chn_admin_pass_user();
        }
        else if(choice==6)
        {
           mksheet();
        }
        else if(choice==7)
        {
           about();
        }
    }
}
