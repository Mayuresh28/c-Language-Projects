#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
   srand(time(NULL));
   return rand() % n;
}

int main()
{
   int a;
   int b;
   int c;
   int d;
   int e;
   int f;
   int s1 = 0;
   int s2 = 0;
   printf("\n\n\n------   Welcome To Spidy's Hub   ------\n\n");

   char name[20];
   printf("Enter Your Name\n");
   scanf("%s", &name);

   printf("\n\nLet's Rock %s\n\n", name);

   printf("Rules Are Followig :\n");
   printf("Rock = 0\n");
   printf("Paper = 1\n");
   printf("Scissors = 2\n\n");

   printf("---------------------------------------------------------------------------\n\n");

   printf("                        ROUND - 1                             \n\n");

   printf("Choose Your Card\n");

   scanf("%d", &a);
   printf("\nYou Have Choosen %d\n\n", a);

   b = generateRandomNumber(3);
   printf("Spidy Have Choosen %d\n", b);

   printf("\n\n___________________________________________________________________________\n\n");

   if (a == 0 && b == 1)
   {
      printf("\nSpidy Won this Round    --(* + *)--\n");
      s2++;
   }
   else if (a == 0 && b == 2)
   {
      printf("\n --(* + *)--    Congratulations You Won this Round \n");
      s1++;
   }
   else if (a == 0 && b == 0)
   {
      printf("\n Uff --(* + *)--    Round Is Tied!!!!!\n");
   }
   else if (a == 1 && b == 0)
   {
      printf("\n --(* + *)--    Congratulations You Won this Round \n");
      s1++;
   }
   else if (a == 1 && b == 2)
   {
      printf("\nSpidy Won this Round    --(* + *)-- \n");
      s2++;
   }
   else if (a == 1 && b == 1)
   {
      printf("\n Uff --(* + *)--    Round Is Tied !!!!!\n");
   }
   else if (a == 2 && b == 0)
   {
      printf("\nSpidy Won this Round    --(* + *)--\n");
      s2++;
   }
   else if (a == 2 && b == 1)
   {
      printf("\n--(* + *)--    Congratulations You Won this Round\n");
      s1++;
   }
   else if (a == 2 && b == 2)
   {
      printf("\n Uff --(* + *)--    Round Is Tied !!!!!\n");
   }

   printf("\n\n___________________________________________________________________________\n\n");

   printf("\n\nSocre Card:\n");
   printf("Your Score = %d\n", s1);
   printf("Spidy's Score = %d\n", s2);

   printf("\n\n---------------------------------------------------------------------------\n\n");

   printf("\n\n                        ROUND - 2                             \n\n");

   printf("Choose Your Card\n");

   scanf("%d", &c);
   printf("\nYou Have Choosen %d\n\n", c);

   d = generateRandomNumber(3);
   printf("Spidy Have Choosen %d\n", d);

   printf("\n\n___________________________________________________________________________\n\n");

   if (c == 0 && d == 1)
   {
      printf("\nSpidy Won this Round    --(* + *)--\n");
      s2++;
   }
   else if (c == 0 && d == 2)
   {
      printf("\n --(* + *)--    Congratulations You Won this Round \n");
      s1++;
   }
   else if (c == 0 && d == 0)
   {
      printf("\n  Uff --(* + *)--    Round Is Tied !!!!! \n");
   }
   else if (c == 1 && d == 0)
   {
      printf("\n --(* + *)--    Congratulations You Won this Round \n");
      s1++;
   }
   else if (c == 1 && d == 2)
   {
      printf("\nSpidy Won this Round    --(* + *)-- \n");
      s2++;
   }
   else if (c == 1 && d == 1)
   {
      printf("\n Uff --(* + *)--    Round Is Tied !!!!!\n");
   }
   else if (c == 2 && d == 0)
   {
      printf("\nSpidy Won this Round    --(* + *)--\n");
      s2++;
   }
   else if (c == 2 && d == 1)
   {
      printf("\n--(* + *)--    Congratulations You Won this Round\n");
      s1++;
   }
   else if (c == 2 && d == 2)
   {
      printf("\n Uff --(* + *)--    Round Is Tied !!!!!\n");
   }

   printf("\n\n___________________________________________________________________________\n\n");

   printf("\n\nSocre Card:\n");
   printf("Your Score = %d\n", s1);
   printf("Spidy's Score = %d\n", s2);

   printf("\n\n---------------------------------------------------------------------------\n\n");

   printf("\n\n                        ROUND - 3                             \n\n");

   printf("Choose Your Card\n");

   scanf("%d", &e);
   printf("\nYou Have Choosen %d\n\n", e);

   f = generateRandomNumber(3);
   printf("Spidy Have Choosen %d\n", f);

   printf("\n\n___________________________________________________________________________\n\n");

   if (e == 0 && f == 1)
   {
      printf("\nSpidy Won this Round    --(* + *)--\n");
      s2++;
   }
   else if (e == 0 && f == 2)
   {
      printf("\n --(* + *)--    Congratulations You Won this Round \n");
      s1++;
   }
   else if (e == 0 && f == 0)
   {
      printf("\n Uff --(* + *)--    Round Is Tied !!!!!\n");
   }
   else if (e == 1 && f == 0)
   {
      printf("\n --(* + *)--    Congratulations You Won this Round \n");
      s1++;
   }
   else if (e == 1 && f == 2)
   {
      printf("\nSpidy Won this Round    --(* + *)-- \n");
      s2++;
   }
   else if (e == 1 && f == 1)
   {
      printf("\n Uff --(* + *)--    Round Is Tied !!!!!\n");
   }
   else if (e == 2 && f == 0)
   {
      printf("\nSpidy Won this Round    --(* + *)--\n");
      s2++;
   }
   else if (e == 2 && f == 1)
   {
      printf("\n--(* + *)--    Congratulations You Won this Round\n");
      s1++;
   }
   else if (e == 2 && f == 2)
   {
      printf("\n Uff --(* + *)--    Round Is Tied !!!!!\n");
   }

   printf("\n\n___________________________________________________________________________\n\n");

   printf("\n\nSocre Card:\n");
   printf("Your Score = %d\n", s1);
   printf("Spidy's Score = %d\n\n", s2);

   printf("\n\n---------------------------------------------------------------------------\n\n");

   if (s1 > s2)
   {
      printf("Bring The Glasses Yarrr ......\n");
      printf("You Have Won The Game\n\n");
      printf("Cheers....    --(* + *)--\n");
   }
   else if (s2 > s1)
   {
      printf("Spidy Have Won The The Game...");
      printf("\n\n");
      printf("Spidy Be Like :   I Am Inevitable   --(* + *)--\n");
   }

   printf("\n\n___________________________________________________________________________\n\n");

   return 0;
}