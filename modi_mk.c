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
void delete_modi()
{
    window_clear();
    cord(106,12);
    printf("Modify Record");
    char s_id[15];
    int isFound = 0, x = 79;
    cord(x,14);;
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("mark.txt","rb+");
    while(fread(&mark, sizeof(mark),1,fp) == 1)
    {
        if(strcmp(s_id, mark.ID) == 0)
        {
            fflush(stdin);

            strcpy(mark.ID,s_id);

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


            fseek(fp,-sizeof(mark), SEEK_CUR);
            fwrite(&mark,sizeof(mark), 1, fp);
            isFound = 1;
            cord(x,37);
            printf("The record is sucessfully added");
            Sleep(2000);
            window_clear();
            break;
        }
    }
    if(!isFound)
    {
        cord(x,25);
        printf("Sory, No record found in the database.");
        Sleep(2000);
        window_clear();
    }
    fclose(fp);

}
