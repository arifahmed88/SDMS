#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
///screen_size///

///end///
int main()
{
    //adjustWindowSize();
   system("color ff");
    //introduction();
    long long int id_of_stu= user_passwod();
    info_table();
    if(id_of_stu==123456)
    {
        admin();
    }
    else
    {
        for_student(id_of_stu);
    }

}
