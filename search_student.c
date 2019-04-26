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
void search_student()
{
    window_clear();
    cord(106,12);
    printf("Student Record");
    char s_id[15];
    int isFound = 0,x=79;
    cord(x,14);
    printf("Enter ID to Search: ");
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
    if(isFound == 1)
    {

        cord(x,17);
        printf("Name             : %s",stu.name);

        cord(x,19);
        printf("Father's Name    : %s",stu.fname);

        cord(x,21);
        printf("Mother's Name    : %s",stu.mname);

        cord(x,23);
        printf("Department name  : %s",stu.department);

        cord(x,25);
        printf("Sesson           : %s",stu.sesson);

        cord(x,27);
        printf("Semester         : %s",stu.semester);

        cord(x,29);
        printf("Date of birth    : %s",stu.birth_date);

        cord(x,31);
        printf("Gender           : %s",stu.gender);

        cord(x,33);
        printf("Present Address  : %s",stu.address);

        cord(x,35);
        printf("Parmanent Address: %s",stu.paddress);

        cord(x,37);
        printf("Blood Group      : %s",stu.bloodgrp);

        cord(x,39);
        printf("Nationality      : %s",stu.nationality);

        cord(x,41);
        printf("Relegion         : %s",stu.relegion);

        cord(x,43);
        printf("Fhone Number     : %s",stu.phone);

        cord(x,45);
        printf("Username         : %s",stu.username);

        cord(x,47);
        printf("Password         : %s",stu.pass_word);

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
