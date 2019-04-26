#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct marksheet
{
    char ID[20];
    char m1[7];
    char m2[7];
    char m3[7];
    char m4[7];
    char m5[7];
    char m6[7];
    char m7[7];
    char m8[7];

};
struct marksheet mark;
void add_mksheet()
{
    //getchar();
    window_clear();
    cord(106,12);
    printf("Add Record");

    ///search///
    char s_id[15];
    int isFound = 0,x=79;
    cord(x,16);
    printf("ID               : ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record.txt","rb");
    while(fread(&mark,sizeof(mark),1,fp) == 1)
    {
        if(strcmp(s_id,mark.ID) == 0)
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
        fp = fopen("mark.txt","ab+");
        {
            fflush(stdin);

            strcpy(mark.ID,s_id);

            cord(106,12);
            printf("Add Record");

            cord(x,18);
            printf("1st              : ");
            gets(mark.m1);
            cord(x,20);
            printf("2nd              : ");
            gets(mark.m2);
            cord(x,22);
            printf("3rd              : ");
            gets(mark.m3);
            cord(x,24);
            printf("4th              : ");
            gets(mark.m4);
            cord(x,26);
            printf("5th              : ");
            gets(mark.m5);
            cord(x,28);
            printf("6th              : ");
            gets(mark.m6);
            cord(x,30);
            printf("7th              : ");
            gets(mark.m7);
            cord(x,32);
            printf("8th              : ");
            gets(mark.m8);

            fwrite(&mark, sizeof(mark), 1, fp);
            cord(x,36);
            printf("The record is sucessfully added");
            Sleep(2000);
            window_clear();

        }
        fclose(fp);

    }
    return;
}
