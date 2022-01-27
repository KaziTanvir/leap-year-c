#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<stdbool.h>

int main()
{
    int year;
    bool leap = false;
    printf("Enter year");
    scanf("%d",&year);
    system("cls");

    if(year%400==0 || (year%100!=0 && year%4==0))
    {
        leap= true;
    }
    else{
        leap = false;
    }
    if(leap)
    {
        printf("leap year");
    }
    else{
        printf("Not leap year");
    }
    getch();

    return 0;
}
