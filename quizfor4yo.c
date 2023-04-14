#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include"ourceforaesthetic.h"
int sect1();
int sect2();
int sect3();
int sect4();
int sect5();
int sect6();
int sect7();
int sect8();
int sect9();
int avg(int add_1,int add_2,int add_3);
int evaluation(int store,int store_2,int store_3,int store_4,int store_5,int store_6,int store_7,int store_8,int store_9);
int fouryearold()
{

    int add_1,add_2, add_3;
    int store,store_2,store_3,store_4,store_5,store_6,store_7,store_8,store_9;
    int space = 150;
    char *string = "WELCOME TO THE AMAZING WORLD OF NUMBERS AND ALPHABETS !!!";
    printf ("%*s\n", space / 2 + strlen(string) / 2,string);
    printf("\n\n\n");
     char *string1 = "ARE YOU READY TO PAVE THROUGH THE FOREST,COLLECT GRAPES BY ANSWERING QUESTIONS CORRECTLY,";
     printf ("%*s\n", space / 2 + strlen(string1) / 2,string1);
     printf("\n\n\n");
     char *string2 = "TO ENSURE THAT YOUR  LITTLE TREE EVOLVES TO ITS FULLEST POTENTIAL?";
     printf ("%*s\n", space / 2 + strlen(string2) / 2,string2);
     printf("\n\n\n");
     char *string3 = "BEFORE YOU MAKE HASTE KNOW THE RULES OF THE GAME:";
     printf ("%*s\n", space / 2 + strlen(string3) / 2,string3);
     char *string4 = "DO NOT ENTER THE ANSWER BUT THE CORRECT OPTION BESIDE IT.";
     printf ("%*s\n", space / 2 + strlen(string4) / 2,string4);
     space=125;
     char *string5 = "FOR EXAMPLE, A for ________.";
     printf ("%*s\n", space / 2 + strlen(string4) / 2,string5);
     char *string6 = "a. APPLE b.CAT c.BALL d. DOG";
     printf ("%*s\n", space / 2 + strlen(string4) / 2,string6);
     printf("\n");
     space=135;
     char *string7 = "THE CORRECT ANSWER IS OPTION a SO ENTER a";
     printf ("%*s\n", space / 2 + strlen(string4) / 2,string7);
      char *string8 = "PRESS ANY KEY TO START PLAYING.HAPPY ADVENTURE!";
     printf ("%*s\n", space / 2 + strlen(string4) / 2,string8);
     char *string9 = "P.S YOUR TREE CURRENTLY LOOKS LIKE THIS.";
     printf ("%*s\n", space / 2 + strlen(string4) / 2,string9);
     green();
     tree(6);
     brown();
     trunk(6);
     white();



    getch();
    system("clear");
    printf("LEVEL 1:");
    printf("SECTION 1: NUMBERS\n");
    store=sect1();
    printf("\nSECTION 2: ALPHABETS\n");
    store_2=sect2();
    printf("\nSECTION 3: GENERAL KNOWLEDGE (BODY PARTS)\n");
    store_3=sect3();
    add_1 = store+store_2+store_3;

   if(add_1 >5)
    {
       printf("\nYOU HAVE PASSED LEVEL 1.\n");
       printf("Congratulations! Your tree has now grown thanks to your efforts!\n");
        tree(6);
        tree(6);
        trunk(6);
       printf("\nPRESS ANY KEY TO CONTINUE PLAYING");
       getch();
       system("clear");
       printf("LEVEL 2:\n");
       printf("SECTION 1: NUMBERS\n");
       store_4=sect4();
       printf("\nSECTION 2: WORDS\n");
       store_5=sect5();
       printf("\nSECTION 3: GENERAL KNOWLEDGE (SHAPES & COLOURS)\n");
       store_6=sect6();
       add_2=store_4+store_5+store_6;

   if(add_2 > 5)
   {
        printf("\nYOU HAVE PASSED LEVEL 2.\n");
        printf("Congratulations! Your tree has now grown thanks to your efforts!\n");
        tree(6);
        tree(6);
        tree(6);
        trunk(6);
       printf("\nPRESS ANY KEY TO CONTINUE PLAYING");
       getch();
       system("clear");
       printf("\nLEVEL 3:\n");
       printf("SECTION 1: NUMBERS(SIMPLE ADDITION AND SUBTRACTION)\n");
      store_7=sect7();
      printf("\nSECTION 2: WORDS\n");
      store_8= sect8();
      printf("\nSECTION 3: GENERAL KNOWLEDGE (RHYMES)\n");
      store_9= sect9();
      add_3=store_7+store_8+store_9;
      /*printf("\n%d",add_1);
      printf("\n%d",add_2);
      printf("\n%d",add_3);*/
      avg(add_1,add_2,add_3);

       if(add_3 > 5)
       {
              printf("CONGRATULATIONS YOUR TREE HAS NOW GROWN TO ITS FULL POTENTIAL!\n");
              tree(6);
              tree(6);
              tree(6);
              tree(6);
              trunk(6);
              evaluation(store,store_2,store_3,store_4,store_5,store_6,store_7,store_8,store_9);

        }
        else
        {
            printf("You can play again to ensure that your tree grows to its fullest potential");
            evaluation(store,store_2,store_3,store_4,store_5,store_6,store_7,store_8,store_9);
        }
   }
    else
    {
        printf("\nTRY AGAIN TO BETTER YOUR SCORES.");
    }
    }
    else
   {
        printf("\nPlease try again :( :( :(");
    }

     //add_3 =store_7+store_8+store_9;/*add_1=6;add_2=6;add_3=6;*/


    return 0;
}
int sect1()
{
    int i,store=0;
    char pre[10]={'a','b','c','\0'};
    char ans[15];
    printf("\n1. Which number comes before the number 6?\n");
    printf("a. 5  \nb. 10  \nc. 8  \nd. 7\n");
    scanf("%2s",&ans[0]);
    printf("\n2. The number 3 is greater than?\n");
    printf("a. 4  \nb. 1  \nc. 10  \nd. 8\n");
    scanf("%2s",&ans[1]);
    printf("3. What number comes immediately after 10 ?\n");
    printf("a. 8  \nb. 19  \nc. 11  \nd. 1\n");
    scanf("%2s",&ans[2]);
   for(i=0;i<3;i++)
    {
        if(ans[i]==pre[i])
        {
            printf("%d.Correct Answer!\n",i+1);
            store=store+1;
        }
        else
        {
            printf("%d.Wrong Answer :(\n",i+1);
        }
    }
    printf("You have scored %d/3 in the numerical section.\n",store);
    if(store==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store);
         grapes3(store,3);
         grapes2(store,2);
         grapes1(store,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store);
    }


    printf("\nPress any key to continue playing");
    getch();
    system("clear");

  return store;
}
int sect2()
{
    int i,store_2=0;
    //char arrays when to hold strings declare them as 2d arrays//
    char pre[10]={'c','b','d','\0'};
    char ans[15];
    printf("1. The word GIRAFFEE ends with a _____?\n");
    printf("a. r \nb. f \nc. e \nd. g\n");
    scanf("%s",&ans[0]);//%c was skipping certain questions
    printf("2. What is the next alphabet in this sequence: H,I,J,K___\n");
    printf("a. M \nb. L \nc. N \nd. P\n");
    scanf("%s",&ans[1]);
    printf("3. The word ball starts with a ___\n");
    printf("a. d \nb. n \nc. a \nd. b\n");
    scanf("%s",&ans[2]);
    for(i=0;i<3;i++)
    {
        if(ans[i] == pre[i])
        {

            printf("%d.Correct Answer!\n",i+1);
            store_2=store_2+1;

        }
        else
        {

            printf("%d.Wrong Answer :(\n",i+1);
        }
    }
    printf("You have scored %d/3 in the alpabetical section.\n",store_2);
    if(store_2==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_2);
         grapes3(store_2,3);
         grapes2(store_2,2);
         grapes1(store_2,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_2);
    }

    printf("\nPress any key to keep playing");
    getch();
    system("clear");


   return store_2;
}
int sect3()
{
    int i,store_3=0;
    /*char *pre[4][15]={
              {'e','y','e','s','\0'},
              {'n','o','s','e','\0'},
               {'e','a','r','s','\0'},};*/
     char pre[10]={'a','c','b','\0'};

    //char *ans = (char*) calloc(100, sizeof(char));
    //char **ans = (char**) malloc(3*sizeof(char*));
    char ans[10];
    printf("1. We see with our _____\n");
    printf("a. eyes \nb. nose \nc. ears \nd. mouth\n");
    scanf("%2s",&ans[0]);//%c was skipping certain questions
    printf("2.We smell with our ______\n");
    printf("a. mouth \nb. legs \nc. nose \nd. eyes\n");
    scanf("%2s",&ans[1]);
    printf("3. We hear with our ______\n");
    printf("a. toes \nb. ears \nc. brain \nd. hands\n");
    scanf("%2s",&ans[2]);

  for(i=0;i<3;i++)
    {

        if(pre[i]==ans[i])
          {
            printf("%d.Correct Answer!\n",i+1);
            store_3=store_3+1;

        }
        else
        {

            printf("%d.Wrong Answer :(\n",i+1);
        }


    }
    printf("You have scored %d/3 in the General Knowledge.\n",store_3);
     if(store_3==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_3);
         grapes3(store_3,3);
         grapes2(store_3,2);
         grapes1(store_3,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_3);
    }
    printf("\nPress any key to keep playing");
    getch();
    system("clear");

    return store_3;
}
int sect4()
{
    int i,store_4=0;
    char pre[10]={'c','d','c','\0'};
    char ans[10];
    printf("1. In the descending order what comes after 10,9,8,7 ?\n");
    printf("a. 4 \nb. 12 \nc. 6 \nd. 10\n");
    scanf(" %2c",&ans[0]);
    printf("2. In the ascending order what comes after 1,2,3 ?\n");
    printf("a. 44 \nb. 15 \nc. 5 \nd. 4\n");
    scanf(" %2c",&ans[1]);
    printf("2. In the ascending order what comes after 10,11,12 ?\n");
    printf("a. 3 \nb. 9 \nc. 13 \nd. 6\n");
    scanf(" %2c",&ans[2]);
    for(i=0;i<3;i++)
    {
        if(pre[i]==ans[i])
        {
            printf("%d.Correct Answer!\n",i+1);
            store_4=store_4+1;
        }
        else
        {
            printf("%d.Wrong Answer :(\n",i+1);

        }
    }
    /*printf(" %c",&ans[0]);printf(" %c",&ans[1]);printf(" %c",&ans[2]);*/
    printf("You have scored %d/3 in the numerical section.\n",store_4);
     if(store_4==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_4);
         grapes3(store_4,3);
         grapes2(store_4,2);
         grapes1(store_4,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_4);
    }
    printf("\nPress any key to keep playing");
    getch();
    system("clear");


  return store_4;
}
int sect5()
{
        int i,store_5=0;
        char pre[10]={'a','c','d','\0'};
    char ans[10];
    printf("1.Mother/Father go to ______?\n");
    printf("a. office  \nb. play  \nc. have fun \nd. sleep\n");
    scanf(" %2c",&ans[0]);
    printf("2.D for ______?\n");
    printf("a. ball \nb. ear \nc. dog \nd. cat\n");
    scanf(" %2c",&ans[1]);
    printf("3.Children go to ______.\n");
    printf("a. office \nb. resttaurant \nc. bed  \nd. school\n");
    scanf(" %2c",&ans[2]);

  for(i=0;i<3;i++)
    {

        if(pre[i]==ans[i])
          {
            printf("%d.Correct Answer!\n",i+1);
            store_5=store_5+1;

        }
        else
        {

            printf("%d.Wrong Answer :(\n",i+1);
        }


    }
    printf("You have scored %d/3 in the general knowledge section.\n",store_5);
     if(store_5==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_5);
         grapes3(store_5,3);
         grapes2(store_5,2);
         grapes1(store_5,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_5);
    }
    printf("\nPress any key to keep playing");
    getch();
    system("clear");

    return store_5;
}
int sect6()
{
        int i,store_6=0;
        char pre[10]={'b','c','d','\0'};


    char ans[10];
    printf("1. The sky is _____\n");
    printf("a. yellow  \nb. blue \nc. orange \nd. red\n");
    scanf(" %2c",&ans[0]);
    printf("2.What tells us the time\n");
    printf("a. machine \nb. A.C \nc. clock \nd. wall\n");
    scanf(" %2c",&ans[1]);
    printf("3.______ can fly.\n");
    printf("a. animals \nb. worms \nc. mammals \nd. birds\n");
    scanf(" %2c",&ans[2]);

  for(i=0;i<3;i++)
    {

        if(pre[i]==ans[i])
    {
            printf("%d.Correct Answer!\n",i+1);
            store_6=store_6+1;

        }
        else
        {

            printf("%d.Wrong Answer :(\n",i+1);
        }


    }
    printf("You have scored %d/3 in the general knowledge section.\n",store_6);
     if(store_6==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_6);
         grapes3(store_6,3);
         grapes2(store_6,2);
         grapes1(store_6,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_6);
    }
    printf("\nPress any key to keep playing");
    getch();
    system("clear");


    return store_6;
}
int sect7()
{
    int i,store_7=0;
    char pre[10]={'b','a','d','\0'};
    char ans[10];
    printf("1. What is 1+2?\n");
    printf("a. 1 \nb. 3 \nc. 4 \nd. 5\n");
    scanf(" %2c",&ans[0]);
    printf("2. What is 5-3?\n");
    printf("a. 2 \nb. 0 \nc. 4 \nb. 5\n");
    scanf(" %2c",&ans[1]);
    printf("3. What is 0+1?\n");
    printf("a. 10 \nb. 0 \nc. 2 \nd. 1\n");
    scanf(" %2c",&ans[2]);
    for(i=0;i<3;i++)
    {
        if(ans[i]==pre[i])
        {
            printf("%d.Correct Answer!\n",i+1);
            store_7=store_7+1;
        }
        else
        {
            printf("%d.Wrong Answer :(\n",i+1);
        }
    }
    printf("You have scored %d/3 in the numerical section.\n",store_7);
     if(store_7==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_7);
         grapes3(store_7,3);
         grapes2(store_7,2);
         grapes1(store_7,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_7);
    }
    printf("\nPress any key to keep playing");
    getch();
    system("clear");
    return store_7;

}
int sect8()
{
        int i,store_8=0;
        char pre[10]={'a','b','d','\0'};

    char ans[10];
    printf("1.Humpty Dumpty sat on a  ______?\n");
    printf("a. wall  \nb. ball  \nc. fall \nd. mall\n");
    scanf(" %2c",&ans[0]);//%c was skipping certain questions
    printf("2.Twinkle Twinkle little ______?\n");
    printf("a. far \nb. star \nc. mar \nd. tar\n");
    scanf(" %2c",&ans[1]);
    printf("3.Ba Ba black sheep have you any _____\n");
    printf("a. fool \nb. tool \nc. pool \nd. wool\n");
    scanf(" %2c",&ans[2]);
   /* printf("%s\n",&ans[0]);printf("%s\n",&ans[1]);printf("%s\n",&ans[2]);*/
  for(i=0;i<3;i++)
    {

        if(pre[i]==ans[i])
          {
            printf("%d.Correct Answer!\n",i+1);
            store_8=store_8+1;

        }
        else
        {

            printf("%d.Wrong Answer :(\n",i+1);
        }


    }
    printf("You have scored %d/3 in the alphabetical section.\n",store_8);
     if(store_8==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_8);
         grapes3(store_8,3);
         grapes2(store_8,2);
         grapes1(store_8,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_8);
    }
    printf("\nPress any key to keep playing");
    getch();
    system("clear");

    return store_8;
}
int sect9()
{
        int i,store_9=0;
        char pre[10]={'c','a','b','\0'};

    //char *ans = (char*) calloc(100, sizeof(char));//char **ans = (char**)malloc(3*sizeof(char*));

    char ans[10];
    printf("1. Which shape has 3 sides?\n");
    printf("a. square  \nb. rectangle \nc. triangle \nd. circle\n");
    scanf(" %2c",&ans[0]);
    printf("2.Which shape has no sides?\n");
    printf("a. circle \nb. triangle \nc. square \nd. rectangle\n");
    scanf(" %2c",&ans[1]);
    printf("3.Which shape has all four sides equal?.\n");
    printf("a. rectangle \nb. square \nc. circle \nd. triangle\n");
    scanf(" %2c",&ans[2]);
   /* printf("%s\n",&ans[0]);printf("%s\n",&ans[1]);printf("%s\n",&ans[2]);8*/
  for(i=0;i<3;i++)
    {

        if(pre[i]==ans[i])
          {
            printf("%d.Correct Answer!\n",i+1);
            store_9=store_9+1;

        }
        else
        {

            printf("%d.Wrong Answer :(\n",i+1);
        }


    }
    printf("You have scored %d/3 in the general knowledge section.\n",store_9);
     if(store_9==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!");
    }
    else
    {
         grapes4(store_9);
         grapes3(store_9,3);
         grapes2(store_9,2);
         grapes1(store_9,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",store_9);
    }
    printf("\nPress any key to get your final evaluation");
    getch();
    system("clear");

    return store_9;
}
int avg(int add_1,int add_2,int add_3)
{
    float sum,sum_h,avg;
    /*printf("\n%d",add_1);printf("\n%d",add_2);printf("\n%d",add_3);*/
    sum=add_1+add_2+add_3;
    //printf("\n%f",sum);// printf("\n%f",sum);
    sum_h=sum/27.00;
    //printf("\n%f",sum_h);
    avg=sum_h*100;
   // printf("\n%f",sum);
   printf("\n\n");
    printf("You have scored a total of %f %% in this quiz!\n",avg);
    return avg;
}
int evaluation(int store,int store_2,int store_3,int store_4,int store_5,int store_6,int store_7,int store_8,int store_9)
{
    int e1,e2,e3;
    e1=store+store_4+store_7;
    e2=store_2+store_5+store_8;
    e3=store_3+store_6+store_9;
    if(e1>6)
    {
        printf("You have scored %d/9 in the Numerical section.\n",e1);
        printf("Sky is the limit for you bud!\n");
    }
    else if(e1>3)
    {
        printf("You have scored %d/9 in the Numerical section.\n",e1);
        printf("You're so close next time you might just become an undisputed champ in this section.\n");
    }
    else
    {
        printf("You have scored %d/9 in the Numerical section.\n",e1);
        printf("You need to do some work. But don't worry it will come to you.Have faith in yourself.\n");
    }
    if(e2>6)
    {
        printf("You have scored %d/9 in the Alphabetical section.\n",e2);
        printf("Sky is the limit for you bud!\n");
    }
    else if(e2>3)
    {
        printf("You have scored %d/9 in the Alphabetical section.\n",e2);
        printf("You're so close next time you might just become an undisputed champ in this section.\n");
    }
    else
    {
        printf("You have scored %d/9 in the Alphabetical section.\n",e2);
        printf("You need to do some work. But don't worry it will come to you.Have faith in yourself.\n");
    }
    if(e3>6)
    {
        printf("You have scored %d/9 in the General Knowledge section.\n",e3);
        printf("Sky is the limit for you bud!\n");
    }
    else if(e3>3)
    {
        printf("You have scored %d/9 in the General Knowledge section.\n",e3);
        printf("You're so close next time you might just become an undisputed champ in this section.\n");
    }
    else
    {
        printf("You have scored %d/9 in the General Knowledge section.\n",e3);
        printf("You need to do some work. But don't worry it will come to you.Have faith in yourself\n");
    }
}
