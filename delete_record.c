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

void delete_student()
{
    window_clear();
    cord(106,12);
    printf("Delete Record");

    char s_id[15];
    int isFound = 0, x = 79;
    cord(x,14);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp, *temp;
    fp = fopen("record.txt","rb");
    temp = fopen("temp.txt", "wb");
    while(fread(&stu, sizeof(stu),1,fp) == 1)
    {
        if(strcmp(s_id, stu.ID) != 0)
        {
            fwrite(&stu,sizeof(stu),1,temp);
        }
        else
        {
            isFound++;
        }
    }
    fclose(fp);
    fclose(temp);
    remove("record.txt");
    rename("temp.txt","record.txt");
    if(isFound>0)
    {
        cord(x,25);
        printf("The record is sucessfully deleted.");
    }
    else
    {
        cord(x,25);
        printf("Sory, The ID isn't found in the database.");

    }
    Sleep(2000);
    window_clear();
    return;
}
