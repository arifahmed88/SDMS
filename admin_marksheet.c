#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void mksheet()
{
    ///window clear///
    int i,j;
    for( i=12; i<41; i++)
    {
        for( j=2; j<73; j++)
        {
            cord(j,i);
            printf(" ");
        }
    }
    ///end///

    int choice;
    cord(10,17);
    printf("Please enter your choice.");
    cord(10,20);
    printf("1.Add Marksheet.");
    cord(10,23);
    printf("2.Search Marksheet.");
    cord(10,26);
    printf("3.Delete Marksheet.");
    cord(10,29);
    printf("4.Modify Marksheet.");
    cord(10,32);
    printf("5.Exit.");
    cord(10,35);
    printf("Choice:-");
    while(1)
    {
        for(i=18; i<35; i++)
        {
            cord(i,35);
            printf(" ");
        }
        cord(18,35);
        scanf("%d",&choice);
        if(choice==5)
        {
            {
                for( i=12; i<41; i++)
                {
                    for( j=2; j<73; j++)
                    {
                        cord(j,i);
                        printf(" ");
                    }
                }
                admin();
                return ;
            }
        }
        else if(choice==1)
        {
            add_mksheet();
        }
        else if(choice==2)
        {
           search_mksheet();
        }
        else if(choice==3)
        {
           delete_mksheet();
        }
        else if(choice==4)
        {
           delete_modi();
        }
    }
}
