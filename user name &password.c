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
long long int user_passwod()
{
    int k=37;
    char user[20],paswrd[20];
    cord(17+k ,6);
    printf("(Please enter your Valid username and password.)");
    cord(35+k ,8);
    printf("Username:-");
    cord(35+k ,9);
    printf("Password:-");
    int i,j,a=0,b=45+k;
    char ch=0;
    for(i=45+k; i<=76+k; i++)
    {
        cord(i ,8);
        printf(" ");
    }
    for(i=45; i<=76; i++)
    {
        cord(i+k ,9);
        printf(" ");
    }
    cord(45+k ,8);
    gets(user);
    while(1)
    {
        cord(b ,9);
        paswrd[ch]=getche();
        if(paswrd[ch]==8&&ch>0)
        {
            --b;
            --ch;
            cord(b ,9);
            printf(" ");
        }
        else if(paswrd[ch]==13||ch==15) break;
        else
        {
            cord(b ,9);
            printf("*");
            ch++;
            b++;
        }
    }
    paswrd[ch]='\0';

    ///for admin start///
    FILE *fr = fopen("user_pass.txt","r");
    char serialId[30];
    char userName[30];
    char passWord[30];
    while(fscanf(fr,"%s",&userName)!=EOF)
    {
        fscanf(fr,"%s",&passWord);
        if(strcmp(user,userName)==0&&strcmp(paswrd,passWord)==0)
        {
            fclose(fr);
            for(i=24+k; i<60+k; i++)
            {
                cord(i ,11);
                printf(" ");
            }
            clear_username_password_window();
            return 123456;
        }
    }
    fclose(fr);
    ///for admin end///
    ///for student start/ /
    fflush(stdin);
    FILE *fp;
    fp = fopen("record.txt","rb");
    while(fread(&stu,sizeof(stu),1,fp) == 1)
    {
        if(strcmp(user,stu.username) == 0&&strcmp(paswrd,stu.pass_word) == 0)
        {
            long long int ar=atol(stu.ID);
            clear_username_password_window();
            return ar;
        }
    }
    ///for student end///
    cord(24+k ,11);
    printf("(Your password or Username is wrong)\n");
    return user_passwod();
}
