#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void chn_admin_pass_user()
{
    char usernm[16];
    char pass[16];
    fflush(stdin);
    remove("user_pass.txt");
    FILE *fp;
    fp = fopen("user_pass.txt","w");

    window_clear();
    cord(94,12);
    printf("Enter your new Username and Password");
    cord(94,18);
    printf("New Username:- ");
    cord(94,21);
    printf("New Password:- ");
    cord(94+15,18);
    gets(usernm);
    cord(94+15,21);
    gets(pass);

    fputs(usernm,fp);
    fprintf(fp,"\n");
    fputs(pass,fp);
    fclose(fp);
    Sleep(2000);
    window_clear();
    return ;

}
