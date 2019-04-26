#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct student
{
    char username[20];
    char pass_word[30];
    char ID[15];
    char name[20];
    char fname[20];
    char mname[20];
    char sesson[10];
    char semester[10];
    char address[300];
    char paddress[30];
    char bloodgrp[5];
    char phone[20];
};
struct student stu;
void info(char str[])
{

    int isFound = 0,x=79;
    fflush(stdin);
    FILE *fp;
    fp = fopen("record.txt","rb");
    while(fread(&stu,sizeof(stu),1,fp) == 1)
    {
        if(strcmp(str,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        cord(x,16);
        printf("The record is Found.");

        cord(x,18);
        printf("ID               : %s",stu.ID);

        cord(x,20);
        printf("Name             : %s",stu.name);

        cord(x,22);
        printf("Father's Name    : %s",stu.fname);

        cord(x,24);
        printf("Mother's Name    : %s",stu.mname);

        cord(x,26);
        printf("Sesson           : %s",stu.sesson);

        cord(x,28);
        printf("Semester         : %s",stu.semester);

        cord(x,30);
        printf("Present Address  : %s",stu.address);

        cord(x,32);
        printf("Parmanent Address: %s",stu.paddress);

        cord(x,34);
        printf("Blood Group      : %s",stu.bloodgrp);

        cord(x,36);
        printf("Phone Number     : %s",stu.phone);

    }
    else
    {
        cord(x,25);
        printf("Sory, No record found in the database.");
        Sleep(2000);
        window_clear();
    }
    fclose(fp);
    return;
}
