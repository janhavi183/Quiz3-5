#include"ourceforaesthetic.h"
#include <stdio.h>
#include <windows.h>
void white()
{
    HANDLE  hConsole;
    int c;
    c=7;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, c);
}
void green()
{
    HANDLE  hConsole;
    int c;
    c=10;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, c);
}
void brown()
{
    HANDLE  hConsole;
    int c;
    c=4;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, c);
}
void purple()
{
    HANDLE  hConsole;
    int c;
    c=5;

  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, c);
}
void tree(int n)
{
    int i,j;
    green();
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    white();
}
void trunk(int n)
{
    int i,j;
    brown();
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-2; j++)
        {
            printf(" ");
        }
        printf("***\n");
    }
    white();
}
void grapes4(int n)
{

    int i,j,k;
    green();
    for(i=0;i<n;i++)
    {
        printf("___T___");
        if(i==0)
        {
            printf("  ");
        }
        else if(i==2)
        {
            printf("");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
    purple();
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("0 ");
        }
        printf(" ");
    }
    printf("\n");
  white();
}
void grapes2(int n,int s)
{
    purple();
    int i,j,k;
    for(i=0;i<n;i++)
    {
       for(k=0;k<i+1;k++)
       {
          // printf(" ");
           if(k==1)
           {
               printf("   ");
           }
           else if(k==2)
           {
               printf("");
           }
           else
           {
               printf("  ");
           }

       }
        for(j=0;j<s;j++)
        {
            printf("0 ");
        }

    }
    printf("\n");
    white();

}
void grapes1(int n,int s)
{
    purple();
    int i,j,k;
    for(i=0;i<n;i++)
    {
       for(k=0;k<i+1;k++)
       {
          // printf(" ");
           if(k==1)
           {
               printf("    ");
           }
           else if(k==2)
           {
               printf("");
           }
           else
           {
               printf("   ");
           }

       }
        for(j=0;j<s;j++)
        {
            printf("0 ");
        }

    }
    printf("\n");
    white();

}
void grapes3(int n,int s)
{
    purple();
    int i,j,k;
    for(i=0;i<n;i++)
    {
       for(k=0;k<i+1;k++)
       {
          // printf(" ");
           if(k==2)
           {
               printf("");
           }
           else
           {
               printf(" ");
           }

       }
        for(j=0;j<s;j++)
        {
            printf("0 ");
        }
       printf(" ");
      /*  if(i==2)
        {
            printf("");
        }
        else
        {
           printf(" ");
        }*/
    }
    printf("\n");
    white();
}
void center(int x,int y)
{

     COORD position;
     position.X=x;
     position.Y=y;


   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
void anycolor(int c)
{
     HANDLE  hConsole;


  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, c);
}
