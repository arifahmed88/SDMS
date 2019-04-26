#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct student
{
    char username[50];
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
    char department[20];
    char nationality[20];
    char relegion[20];
    char gender[10];
    char birth_date[20];
};
struct student stu;
void add_student()
{
    window_clear();
    cord(106,12);
    printf("Add Record");

    ///search///
    char s_id[15];
    int isFound = 0,x=79;
    cord(x,15);
    printf("ID               : ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record.txt","rb");
    while(fread(&stu,sizeof(stu),1,fp) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }

    if(isFound!=0)
    {
        cord(79,25);
        printf("The ID is already in the database.");
        Sleep(2000);
        window_clear();
        fclose(fp);
        return;
    }
    else
    {
        int x = 79,k=x+18;
        FILE *fp;
        fp = fopen("record.txt","ab+");
        {
            fflush(stdin);

            strcpy(stu.ID,s_id);

            cord(x,17);
            printf("Name             : ");
            gets(stu.name);

            cord(x,19);
            printf("Father's Name    : ");
            gets(stu.fname);

            cord(x,21);
            printf("Mother's Name    : ");
            gets(stu.mname);

            cord(x,23);
            printf("Department name  : ");
            gets(stu.department);

            cord(x,25);
            printf("Sesson           : ");
            gets(stu.sesson);

            cord(x,27);
            printf("Semester         : ");
            gets(stu.semester);

            cord(x,29);
            printf("Date of birth    : ");
            gets(stu.birth_date);

            cord(x,31);
            printf("Gender           : ");
            gets(stu.gender);

            cord(x,33);
            printf("Present Address  : ");
            gets(stu.address);

            cord(x,35);
            printf("Parmanent Address: ");
            gets(stu.paddress);

            cord(x,37);
            printf("Blood Group      : ");
            gets(stu.bloodgrp);

            cord(x,39);
            printf("Nationality      : ");
            gets(stu.nationality);

            cord(x,41);
            printf("Relegion         : ");
            gets(stu.relegion);

            cord(x,43);
            printf("Phone Number     : ");
            gets(stu.phone);

            cord(x,45);
            printf("Username         : ");
            gets(stu.username);

            cord(x,47);
            printf("User password    : ");
            gets(stu.pass_word);

            fwrite(&stu, sizeof(stu), 1, fp);
            Sleep(1000);
            window_clear();
            cord(82,28);
            printf("The record is sucessfully added");
            Sleep(1000);
            window_clear();
        }
        fclose(fp);

    }
    return;
}
