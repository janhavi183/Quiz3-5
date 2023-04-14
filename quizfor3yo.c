#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include"ourceforaesthetic.h"

int sec_1_1();
int sec_1_2();
int sec_1_3();
int sec_2_1();
int sec_2_2();
int sec_2_3();
int sec_3_1();
int sec_3_2();
int sec_3_3();
int threeyearold()
{
    int level_1_score=0 ,count_1_1,count_1_2,count_1_3;
	int level_2_score=0,count_2_1,count_2_2,count_2_3;
	int level_3_score=0,count_3_1, count_3_2,count_3_3;
	int Total;
    char choice;

	mainpage:
	    system("cls");
	    printf("\t\t\tQUIZ TIME KIDS!!\n");
	    printf("\n\t\t________________________________________");
	    printf("\n\t\t\t   WELCOME ");
	    printf("\n\t\t\t      KIDS!! ");

	    printf("\n\t\t________________________________________");
	    printf("\n\t\t________________________________________");
	    printf("\n\t\t   LEARN AMAZING THINGS WITH US!!!!!!!!!!!    ") ;
	    printf("\n\t\t________________________________________");
	    printf("\n\t\t________________________________________");
	    printf("\n\t\t > Press S to start the quiz");
	    printf("\n\t\t > press Q to quit             ");
	    printf("\n\t\t________________________________________\n\n");

	    choice=toupper(getch());
	if (choice=='Q')
	{
		exit(0);
	}
	else if(choice=='S')
	{
		system("cls");
	    printf("\n ------------------  Welcome ! Let's begin the Quiz--------------------------");
	    printf("\n\n Here are some tips you might wanna know before starting:");
	    printf("\n -------------------------------------------------------------------------");
	    printf("\n >> There are 3 LEVELS in this Quiz each having 3 SECTIONS.");
	    printf("\n >> In every level the 3 sections are of different category,");
	    printf("\n    each having 3 questions, so total 9 questions in each level.");
	    printf("\n >> You are eligible for the next level only if you get 5 out of 9 questions right.");
	    printf("\n >> You will have 4 options (option: A,B,C and D) for each question. Only one of them is right.");
	    printf("\n\n >> IMPORTANT NOTE: In order to answer please press keys 'A','B','C'or'D' according to your answer!");

	    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
	    printf("\n\n\n Press Y  to start the game!\n");
	    printf("\n Press any other key to return to the main menu!");

	    if (toupper(getch())=='Y')
		{
			goto level_1;
		}
		else
		{
			goto mainpage;
			system("cls");
		}
	}
	else
	{
		goto mainpage;
		system("cls");
	}
	level_1:
		system("cls");
		level_1_score=(sec_1_1()+sec_1_2()+sec_1_3());
		system("cls");
		printf("\n\nFinal score of level 1: %d \n",level_1_score);
		if(level_1_score>5)
		{
			printf("\n\n\t*** CONGRATULATION you passed level 1 ***\n");
	        tree(6);
	        tree(6);
	        trunk(6);
			printf("\n\n\n\n\t!Press Y key to Start level 2!");

			if(toupper(getch())=='Y')
			{
			 	goto level_2;
			}
			else
			{
			 	goto mainpage;
			}

		level_2:
			system("cls");
			level_2_score=(sec_2_1()+sec_2_2()+sec_2_3());
			system("cls");
			printf("\n\nFinal score of level 2: %d \n",level_2_score);
			if(level_2_score>5)
			{
				printf("\n\n\t*** CONGRATULATION you passed level 2 ***\n");
	        	tree(6);
	        	tree(6);
	        	tree(6);
	       		trunk(6);

				printf("\n\n\n\n\t!Press Y key to Start the final level 3!");
			    if(toupper(getch())=='Y')
			    {
			    	goto level_3;
			    }
			    else
			    {
			 		goto mainpage;
			    }
		    level_3:
			    system("cls");
		        level_3_score=(sec_3_1()+sec_3_2()+sec_3_3());
		        system("cls");
		        printf("\n\nFinal score of level 3: %d ",level_3_score);
	        if(level_3_score>5)
	        {

		        printf("\n\n\t*** CONGRATULATION you passed level 3 ***\n");
		        tree(6);
		        tree(6);
		        tree(6);
		        tree(6);
		        trunk(6);
		        printf("\n\n\n\nCongratulations!! You have successfully completed the quiz \n");
		        Total=(level_1_score+level_2_score+level_3_score);
		        printf("\n\n\nYou got %d  / 27  right in overall quiz.\n",Total);

	         if(Total>=24)
	         {
	         	printf("\n\nYou are Excellent!!!!!");
	         	printf("\n\nKeep up the Good work Champ");
	         	printf("\n\nYou get ****** stars");
			 }
			 else if(Total>=20)
			 {
			 	printf("\n\nYou are Amazing!!!!!");
	         	printf("\n\nAim Higher Champ");
	         	printf("\n\nYou get ***** stars");
			 }
			 else if(Total>=15)
			 {
			 	printf("\n\nYou are Very Good");
			 	printf("\n\nYou can do much better Champ");
			 	printf("\n\nYou get *** stars");
			 }
	        }
	        else
	        {
	        	printf("\n\nSORRY YOU COULDN'T CLEAR LEVEL 3', BETTER LUCK NEXT TIME");
		        printf("\nPress 'Y' key to try level 3 again!");

		        if(toupper(getch())=='Y')
		        {
		 	      goto level_3;
		        }
		        else
		        {
		        	goto mainpage;
		        }
		    }
	    }
		else
		{
		 printf("\n\nSORRY YOU COULDN'T CLEAR LEVEL 2', BETTER LUCK NEXT TIME");
		 printf("\nPress 'Y' key to try level 2 again!");

		 if(toupper(getch())=='Y')
		 {
		 	goto level_2;
		 }
		 else
		 {
		 	goto mainpage;
		 }

		}
	}
	else
	{
		printf("\n\nSORRY YOU COULDN'T CLEAR LEVEL 1', BETTER LUCK NEXT TIME");
		printf("\nPress 'Y' key to try level 1 again!");

		 if(toupper(getch())=='Y')
		 {
		 	goto level_1;
		 }
		 else
		 {
		 	goto mainpage;
		 }

    }

    getch();
	return 0;

}
int sec_1_1()
{

	int i,count_1_1=0;
	int pre[10]={3,1,2};
	int ans[15];
	printf("\n\n\t\t LEVEL 1: SECTION 1: AMAZING ALPHABETS!");
	printf("\n\n\n1. Which letter does the word 'apple' starts with?");
	printf("\n\n1) V \t\t2) E \n\n3) A \t\t4) P");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[0]);

	printf("\n\n\n2. Which letter does the word 'zebra' starts with?");
	printf("\n\n1) Z \t\t2) N \n\n3) R \t\t4) B");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n3. Which letter does the word 'green' starts with?");
	printf("\n\n1) C \t\t2) G \n\n3) E \t\t4) N");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);

	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_1_1++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the alphabet section\n",count_1_1);
	if(count_1_1==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_1_1);
         grapes3(count_1_1,3);
         grapes2(count_1_1,2);
         grapes1(count_1_1,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_1_1);
    }

	return (count_1_1);
}
int sec_1_2()
{
	int i,count_1_2=0,n;
	int pre[10]={3,2,1};
	int ans[15];
	printf("\n\n\t\t LEVEL 1: SECTION 2: MINUTE MATHS!");
	printf("\n\n\n4. How many total fingers do you have?");
	printf("\n\n1) 5 \t\t2) 9 \n\n3) 10 \t\t4) 4 ");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n5. How many eyes do you have?");
    printf("\n\n1) 3 \t\t2) 2 \n\n3) 4 \t\t4) 1");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n6. Count the number of lines- |||||");
	printf("\n\n1) 5 \t\t2) 2 \n\n3) 3 \t\t4) 4 ");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_1_2++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the numbers section\n",count_1_2);
	if(count_1_2==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_1_2);
         grapes3(count_1_2,3);
         grapes2(count_1_2,2);
         grapes1(count_1_2,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_1_2);
    }

	return (count_1_2);
}
int sec_1_3()
{
	int i,count_1_3=0,n;
	int pre[10]={2,1,4};
	int ans[15];
	printf("\n\n\t\t LEVEL 1: SECTION 3: GENERAL KNOWLEDGE!");
	printf("\n\n\n7. What is the shape of a bangle?");
	printf("\n\n1) Triangle \t\t2) Circle \n\n3) Rectangle \t\t4) Square");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n8. What part of your body lets you see?");
	printf("\n\n1) Eyes \t\t2) Legs \n\n3) Nose \t\t4) Ears");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n9. What colour are apples?");
	printf("\n\n1) Blue \t\t2) Green \n\n3) Orange \t\t4) Red");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_1_3++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the GK section\n",count_1_3);
	if(count_1_3==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_1_3);
         grapes3(count_1_3,3);
         grapes2(count_1_3,2);
         grapes1(count_1_3,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_1_3);
    }

	return (count_1_3);
}
int sec_2_1()
{
	int i,count_2_1=0,n;
	int pre[10]={2,3,1};
	int ans[15];
	printf("\n\n\t\t LEVEL 2: SECTION 1: AMAZING ALPHABETS!");
	printf("\n\n\n1. What comes after 'C'?");
	printf("\n\n1) B \t\t2) D \n\n3) A \t\t4) E");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n2. What comes after 'B'?");
	printf("\n\n1) A \t\t2) B \n\n3) C \t\t4) D");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n3. What comes before 'B'?");
	printf("\n\n1) A \t\t2) B \n\n3) C \t\t4) D");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_2_1++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the alphabet section\n",count_2_1);
	if(count_2_1==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_2_1);
         grapes3(count_2_1,3);
         grapes2(count_2_1,2);
         grapes1(count_2_1,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_2_1);
    }

	return (count_2_1);
}
int sec_2_2()
{
	int i,count_2_2=0,n;
	int pre[10]={1,4,3};
	int ans[15];
	printf("\n\n\t\t LEVEL 2: SECTION 2: MINUTE MATHS!");
	printf("\n\n\n4. Count the letters in the word 'E L E P H A N T'?");
	printf("\n\n1) 8 \t\t2) 9 \n\n3) 7 \t\t4) 10");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n5. Count the number of '*' here- '* $ ! * * @ * # *' ");
	printf("\n\n1) 4 \t\t2) 2 \n\n3) 1 \t\t4) 5");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n6. Count the number of 'A' in this sentence- 'MARY HAD A LITTLE LAMB' ");
	printf("\n\n1) 3 \t\t2) 5 \n\n3) 4 \t\t4) NONE");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_2_2++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the numbers section\n",count_2_2);
	if(count_2_2==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_2_2);
         grapes3(count_2_2,3);
         grapes2(count_2_2,2);
         grapes1(count_2_2,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_2_2);
    }

	return (count_2_2);
}
int sec_2_3()
{
	int i,count_2_3=0,n;
	int pre[10]={2,3,4};
	int ans[15];
	printf("\n\n\t\t LEVEL 1: SECTION 3: GENERAL KNOWLEDGE!");
	printf("\n\n\n7. There are how many days in a week?");
	printf("\n\n1) 10 \t\t2) 7 \n\n3) 5 \t\t4) 6");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n8. What is the shape of a mountain?");
	printf("\n\n1) Circle \t\t2) Rectangle \n\n3) Triangle \t\t4) Square");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n9. What is the colour of grass?");
	printf("\n\n1) Red \t\t2) Yellow\n\n3) Orange\t\t4) Green");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_2_3++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the GK section\n",count_2_3);
	if(count_2_3==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_2_3);
         grapes3(count_2_3,3);
         grapes2(count_2_3,2);
         grapes1(count_2_3,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_2_3);
    }

	return (count_2_3);
}
int sec_3_1()
{
	int i,count_3_1=0,n;
	int pre[10]={1,3,4};
	int ans[15];
	printf("\n\n\t\t LEVEL 3: SECTION 1: AMAZING ALPHABETS!");
	printf("\n\n\n1. What is the 2nd letter in the word 'A L P H O N S O'?");
	printf("\n\n1) L \t\t2) A \n\n3) P \t\t4) H");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n2. What is the 2nd last letter in the word 'P A R T Y'?");
	printf("\n\n1) Y \t\t2) R \n\n3) T \t\t4) A");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n3. What letter comes after 'A' in the word 'S T R A W B E R R Y'?");
	printf("\n\n1) A \t\t2) B \n\n3) R \t\t4) W");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_3_1++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the alphabet section\n",count_3_1);
	if(count_3_1==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_3_1);
         grapes3(count_3_1,3);
         grapes2(count_3_1,2);
         grapes1(count_3_1,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_3_1);
    }

	return (count_3_1);
}
int sec_3_2()
{
	int i,count_3_2=0,n;
	int pre[10]={2,1,3};
	int ans[15];
	printf("\n\n\t\t LEVEL 3: SECTION 2: MINUTE MATHS!");
	printf("\n\n\n4. Which number looks like a circle?");
	printf("\n\n1) 3 \t\t2) 0 \n\n3) 4 \t\t4) NONE");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n5. Count the number of 'O' in the word 'G A W O O N A O N'?");
	printf("\n\n1) 3 \t\t2) 2 \n\n3) 4 \t\t4) 1");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n6. What is 2 + 3?");
	printf("\n\n1) 3 \t\t2) 2 \n\n3) 5 \t\t4) 6");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_3_2++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the numbers section\n",count_3_2);
	if(count_3_2==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_3_2);
         grapes3(count_3_2,3);
         grapes2(count_3_2,2);
         grapes1(count_3_2,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_3_2);
    }

	return (count_3_2);
}
int sec_3_3()
{
	int i,count_3_3=0,n;
	int pre[10]={4,1,2};
	int ans[15];
	printf("\n\n\t\t LEVEL 1: SECTION 3: GENERAL KNOWLEDGE!");
	printf("\n\n\n7. Giant wheel is in the shape of?");
	printf("\n\n1) Square \t\t2) Rectangle \n\n3) Triangle \t\t4) Circle");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
    scanf("\n%d",&ans[0]);

	printf("\n\n\n8. How many colours are in a rainbow?");
	printf("\n\n1) 7 \t\t2) 8 \n\n3) 6 \t\t4) 5");
    printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
    printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[1]);

	printf("\n\n\n9. What comes in the morning?");
	printf("\n\n1) Moon \t\t2) Sun \n\n3) Stars \t\t4) NONE");
	printf("\n\nPlease press keys '1','2','3' or '4' i.e. option number, in order to answer!");
	printf("\n\n\nYour answer: ");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			count_3_3++;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the GK section\n",count_3_3);
	if(count_3_3==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(count_3_3);
         grapes3(count_3_3,3);
         grapes2(count_3_3,2);
         grapes1(count_3_3,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",count_3_3);
    }

	return (count_3_3);
}
