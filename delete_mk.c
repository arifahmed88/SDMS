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
void delete_mksheet()
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
    fp = fopen("mark.txt","rb");
    temp = fopen("temp.txt", "wb");
    while(fread(&mark, sizeof(mark),1,fp) == 1)
    {
        if(strcmp(s_id, mark.ID) != 0)
        {
            fwrite(&mark,sizeof(mark),1,temp);
        }
        else
        {
            isFound++;
        }
    }
    fclose(fp);
    fclose(temp);
    remove("mark.txt");
    rename("temp.txt","mark.txt");
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
