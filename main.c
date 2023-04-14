#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ourceforaesthetic.h"
#include "sourcefor4.h"
#include "sourcefor5.h"
#include "sourcefor3.h"

int main()
{
    int age;
   // center(70,10);
    anycolor(3);
    printf("WELCOME ABOARD CHAMPION!\n\n");
    //center(60,12);
    printf("ARE YOU READY TO SHOW THE WORLD WHAT YOU'RE MADE OF?\n");
    //center(63,14);
    printf("HOLD UP.BEFORE YOU GET READY TO PLAY,\n");
   // center(70,16);
    printf("WHAT IS YOUR AGE (3,4,5)?");
    scanf("%d",&age);
    white();
    if(age==3)
    {
        system("clear");
        threeyearold();
    }
     else if(age==4)
    {
        system("clear");
        fouryearold();
    }
    else if(age==5)
    {
        system("clear");
        fiveyearold();
    }
    else
    {
        printf("Some error has been detected. Are you sure you entered any one and only one of these numbers:3,4,5?");
        printf("Please try again!");
        printf("The game awaits you!");
    }


    return 0;
}
