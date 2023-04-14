#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include"ourceforaesthetic.h"
int section1();
int section2();
int section3();
int section11();
int section22();
int section33();
int section111();
int section222();
int section333();


int fiveyearold()
{
	int scorefinal1=0 ,score1,score2,score3,scorefinal2=0,score11,score22,score33,scorefinal3=0,score111, score222,score333,Total;
	mainpage:
	system("cls");
	printf("\n Hello!Kids");
	printf("\n\nWELCOME TO THE AMAZING WORLD OF NUMBERS AND ALPHABETS !!!");
	printf("\n\nARE YOU READY TO PAVE THROUGH THE FOREST,COLLECT GRAPES BY ANSWERING QUESTIONS CORRECTLY");
	printf("\n\nTO ENSURE THAT YOUR  LITTLE TREE EVOLVES TO ITS FULLEST POTENTIAL?");
	printf("\n\n Here Are Few Tips For You.");
     printf("\n -------------------------------------------------------------------------");
     printf("\n >> There are 3 Levels in the Quiz each having 3 sections");
     printf("\n >> Each having 3 quetions so total 9 questions in each level.");
     printf("\n    You are eligible for the next level only if you get 5 out of 9 questions right");
     printf("\n >> You will be given 4 options(1,2,3,4) and you have to press 1,2,3,4 for the");
     printf("\n    right option.");
     printf("\n >> You will be asked questions continuously, till right answers are given");
     printf("\n >> No negative marking for wrong answers!");
     printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
     printf("\n\nYOUR TREE CURRENTLY LOOKS LIKE THIS.\n");
     green();
     tree(6);
     brown();
     trunk(6);



	printf("\n\nLets play.Press P");
	printf("\n\nTo Quit .Press Q");
	if(toupper(getch())=='P')
	{
		goto level1;
	}
	else if(toupper(getch())=='Q')
	{
	  exit(1);
	}

	level1:
	system("cls");
	printf("Round 1:");
	scorefinal1=(section1()+section2()+section3());
	system("cls");
	printf("\n\nFinal score of level 1: %d marks\n",scorefinal1);
	if(scorefinal1>5)
	{

		printf("Congratulations! Your tree has now grown thanks to your efforts!\n");
        tree(6);
        tree(6);
        trunk(6);
		printf("\n\nYou are eligible to play the next round!!");
		printf("\nWould you like to play 2nd round again?");
		 printf("\nIf yes press Y");
		 if(toupper(getch())=='Y')
		 {
		 	goto level2;
		 }
		 else
		 {
		 	goto mainpage;
		 }

		level2:
		system("cls");
		printf("Round 2:");
		scorefinal2=(section11()+section22()+section33());
		system("cls");
		printf("\n\nFinal score of level 2: %d marks \n",scorefinal2);
		if(scorefinal2>5)
		{
			printf("\nYOU HAVE PASSED LEVEL 2.\n");
            printf("Congratulations! Your tree has now grown thanks to your efforts!\n");
        	tree(6);
        	tree(6);
        	tree(6);
       		trunk(6);

			printf("\n\nYou are eligible to play the next round!!");
			printf("\nWould you like to play 3rd round ?");
		    printf("\nIf yes press Y");
		    if(toupper(getch())=='Y')
		    {
			 goto level3;
		    }
		    else
		    {
		 	goto mainpage;
		    }
		    level3:
		    system("cls");
		    printf("Round 3:");
	        scorefinal3=(section111()+section222()+section333());
	        system("cls");
	        printf("\n\nFinal score of level 3: %d",scorefinal3);
	        if(scorefinal3>5)
	        {

	         printf("\nCONGRATULATIONS YOUR TREE HAS NOW GROWN TO ITS FULL POTENTIAL!\n");
              tree(6);
              tree(6);
              tree(6);
              tree(6);
              trunk(6);
	          printf("\n\n\n\nCongratulations!! You have successfully completed the quiz \n");
	          Total=(scorefinal1+scorefinal2+scorefinal3);
	          printf("\n\n\nYou have scored %d  marks outoff 27 marks  in overall quiz.\n",Total);
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
	        	printf("\nYou can do better.Try again 3rdRound.");
		        printf("\nWould you like to play 3rd round again?");
		        printf("\nIf yes press Y");
		        if(toupper(getch())=='Y')
		        {
		 	      goto level3;
		        }
		        else
		        {
		        	goto mainpage;
		        }

			}

		}
		else
		{
		 printf("\nYou are not eligible to play the 3rd  round.Try again 2nd Round.");
		 printf("\nWould you like to play 2nd round again?");
		 printf("\nIf yes press Y");
		 if(toupper(getch())=='Y')
		 {
		 	goto level2;
		 }
		 else
		 {
		 	goto mainpage;
		 }

		}
	}
	else
	{
		printf("\nYou are not eligible to play the 2nd round.Try again 1st Round. ");
		printf("\nWould you like to play 1st round again?");
		 printf("\nIf yes press Y");
		 if(toupper(getch())=='Y')
		 {
		 	goto level1;
		 }
		 else
		 {
		 	goto mainpage;
		 }

    }

    getch();
	return 0;
}
int section1()
{

	int i,score1=0;
	int pre[10]={1,1,2};
	int ans[15];
	printf("\n\nSection1:Numbers");
	printf("\n 1.Which number comes after 4?");
	printf("\n1.( 5 ) \n2.( 10 )\n3.( 8 )\n4.( 1 )");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2.Which number is less than 4?");
	printf("\n1. (2) \n2.(10)\n3.( 8)\n4.(9) ");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3.Count the boxes?");
	printf("\n  ____      _____");
	printf("\n |    |    |     | ");
	printf("\n |____|    |_____|");
	printf("\n1.( 5 )\n2.( 2 )\n3.( 8  )\n4. (1 )");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);

	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score1=score1+1;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the numerical section\n",score1);
	if(score1==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score1);
         grapes3(score1,3);
         grapes2(score1,2);
         grapes1(score1,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score1);
    }

	return (score1);


}
int section2()
{
	int i,score2=0,n;
	int pre[10]={1,4,1};
	int ans[15];
	printf("\nSection2:Alphabets");
	printf("\n 1.Fill in the blanks:");
	printf("\n a   b    c   d  ___  f");
    printf("\n1. (e) \n2. (a ) \n3.( b ) \n4. (g)");
    printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2. In RAT starting letter is:");
	printf("\n1.( A ) \n2.( B ) \n3.( H) \n4. (R )");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3.Z for _______");
	printf("\n1. (Zebra) \n2.(Snake) \n3. (Tiger) \n4. (Lion )");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score2=score2+1;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the alphabetical section\n",score2);
	if(score2==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score2);
         grapes3(score2,3);
         grapes2(score2,2);
         grapes1(score2,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score2);
    }

	return (score2);

}
int section3()
{
	int i,score3=0,n;
	int pre[10]={2,1,3};
	int ans[15];
	printf("\n\nSection3:General knowledge");
	printf("\n 1. You have ___ eyes");
	printf("\n1.(5) \n2.(2) \n3.(8) \n4.(9)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2.There is ___ sun in sky.");
	printf("\n1.(1) \n2.(2) \n3.(3) \n4.(4) ");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3.The sun rises from ________");
	printf("\n1.(west)   \n2.(south)  \n3.(east)   \n4.(north)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score3=score3+1;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the general knowledge section\n",score3);
	if(score3==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score3);
         grapes3(score3,3);
         grapes2(score3,2);
         grapes1(score3,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score3);
    }
	return (score3);

}

int section11()
{

	int i,score11=0;
	int pre[10]={1,3,2};
	int ans[15];
	printf("\n\nSection1:Numbers");
	printf("\n 1.2+3=?");
	printf("\n1.(5) \t 2.(1) \n 3.(4) \t 4.(6)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2.Choose the correct ascending order: ");
	printf("\n 1.(9,8,6,5) \n2.(4,7,8,9)  \n3.(1,2,3,4) \n4.(9,6,3,1)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3.Count the  lines");
	printf("\n ______________");
	printf("\n  ___________");
	printf("\n   _________");
	printf("\n    _______");
	printf("\n1.(5) \n2.(4) \n3.(7) \n4.(9))");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);

	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score11=score11+1;
		}
		else
		{
			printf("\n%d Wrong Answer ! \n",i+1);
		}
	}
	printf("\nYou have scored %d/3 in the numerical section\n",score11);
	if(score11==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score11);
         grapes3(score11,3);
         grapes2(score11,2);
         grapes1(score11,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score11);
    }
	return (score11);

}
int section22()
{
	int i,score22=0,n;
	int pre[10]={1,1,1};
	int ans[15];
	printf("\nSection2:Alphabets");
	printf("\n 1. write third letter of Airplane");
	printf("\n1.(r) \n2.(i) \n3.(p) \n4.(a)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2. k for ________");
	printf("\n1.(king) \n2.(queen) \n3.(cake) \n4.(cat)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3. Name a fruit with letter G ");
	printf("\n1.(Grapes) \n2.(Papaya) \n3.(Apple) \n4.(Orange)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);

	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score22=score22+1;
		}
		else
		{
			printf("\n%d Wrong Answer ! \n",i+1);
		}
	}
	printf("\nYou have scored %d/3 in the alphabetical section\n",score22);
	if(score22==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score22);
         grapes3(score22,3);
         grapes2(score22,2);
         grapes1(score22,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score22);
    }
	return (score22);

}
int section33()
{
	int i,score33=0,n;
	int pre[10]={1,2,3};
	int ans[15];
	printf("\n\nSection3:General knowledge");
	printf("\n 1. You have ___ sense organs");
	printf("\n1.(5) \n2.(2) \n3.(8) \n4.(9)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2.How many hours do we have in a day?.");
	printf("\n1.(12) \n2.(24) \n3.(36) \n4.(48) ");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3.How many  colours  are there in a rainbow?");
	printf("\n1.(8)   \n2.(4) \n3.(7)  \n4.(1)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);

	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score33=score33+1;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("\n You have scored %d/3 in the general knowledge section\n",score33);
	if(score33==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score33);
         grapes3(score33,3);
         grapes2(score33,2);
         grapes1(score33,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score33);
    }
	return (score33);

}

int section111()
{
	int i,score111=0,n;
	int pre[10]={1,4,4};
	int ans[15];
	printf("\n\nSection1:Numbers");
	printf("\n 1.5+6=?");
	printf("\n1.(11)   2. (10)   3. (8)     4. (1) ");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2.Write Three in Numerals:");
	printf("\n1.(5)    2. (10)    3.(8)      4.(3)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3.Write 7 in number name");
	printf("\n1.(six) \t 2.(four)\n 3.(five)\t 4.(seven)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score111=score111+1;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/3 in the general knowledge section\n",score111);
	if(score111==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score111);
         grapes3(score111,3);
         grapes2(score111,2);
         grapes1(score111,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score111);
    }
	return (score111);
}
int section222()
{
	int i,score222=0,n;
	int pre[10]={1,1,2};
	int ans[15];
	printf("\nSection2:Alphabets");
	printf("\n 1. Apple is __________ in colour");
	printf("\n1.(red)     \n2.(black)   \n3.(purple)     \n4.(orange) ");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 2.Fill in the blanks:");
	printf("\n b__t");
    printf("\n1.(a) \n 2.(b) \n 3.(c) \n4.(d))");
    printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 3. Name a animal with letter D");
	printf("\n1.(Gorilla )\n2.(Dog )\n3.(Cat )\n4.(Elephant)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);
	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score222=score222+1;
		}
		else
		{
			printf("\n%d Wrong Answer ! \n",i+1);
		}
	}
	printf("\nYou have scored %d/3 in the alphabet knowledge section\n",score222);
	if(score222==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score222);
         grapes3(score222,3);
         grapes2(score222,2);
         grapes1(score222,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score222);
    }
	return (score222);
}
int section333()
{
	int i,score333=0,n;
	int pre[10]={1,1,1};
	int ans[15];
	printf("\n\nSection3:General knowledge");
	printf("\n 1.Name the natural satellite of earth.");
	printf("\n1.(Moon)   \n2.(Titan )   \n3.(Venus )  \n4.(Mars)");
    printf("\nEnter Option Number:");
	scanf("\n%d",&ans[0]);
	printf("\n 1.Which farm animal lays eggs?");
	printf("\n1.(Hen) \n 2.(bull )   \n3.(cow )  \n4.(Donkey)");
    printf("\nEnter Option Number:");
	scanf("\n%d",&ans[1]);
	printf("\n 5.Which is the largest mammal?");
	printf("\n1.(Blue Whale)  \n2.(Elephant) \n3.(Tiger)  \n4.(Lion)");
	printf("\nEnter Option Number:");
	scanf("\n%d",&ans[2]);

	for(i=0;i<3;i++)
	{
		if(ans[i]==pre[i])
		{
			printf("\n%d Correct Answer!\n ",i+1);
			score333=score333+1;
		}
		else
		{
			printf("\n%d Wrong Answer !\n",i+1);
		}
	}
	printf("You have scored %d/5 in the general knowledge section\n",score333);
	if(score333==0)
    {
        printf("You haven't collected any grapes :(( But Don't despair try again and you just might!\n");
    }
    else
    {
         grapes4(score333);
         grapes3(score333,3);
         grapes2(score333,2);
         grapes1(score333,1);
         printf("You have succesfully collected %d grapes/grape. GOOD JOB!",score333);
    }
	return (score333);


}
