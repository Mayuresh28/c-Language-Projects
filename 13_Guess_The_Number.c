# include<stdio.h>
#include<stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
   srand(time(NULL));
   return rand() % n;
}

int main(){
    int num;
    
   int score=0;
int playagain=1;
  int b =generateRandomNumber(10);

   
  while ( playagain==1)
  {
 printf("\n\n\n------   Welcome To Spidy's Hub   ------\n\n");
 
 printf("Spidy Have Selected His Number!!!!\n\n");


     

for (int i = 0; i < 4; i++)
{
   
  printf(" \nGuess THe Number\n");
  scanf("%d",&num);

 
  printf("_______________________________________________________________________________________________"); 

        if (b==num)
        {
           printf("\nYour Guess is Right\n");
           score++;
         
      break;
        }
        else if (b>num)
        {

           printf("\nYour Guess is Wrong\n");
           printf("\nTry Any Higher Number\n");
           
           continue;

        }
        else if (b<num)
        {
           
           printf("\nYour Guess is Wrong\n");
           printf("\nTry Any Lower Number\n");
           continue;
        }
        
        
}
  printf("_______________________________________________________________________________________________"); 


   if (score==1)
   {
    printf(" \nYou Won The Game!!!!!!\n\n");
   }
   else if (score==0)
   {
    printf(" \nYou Lost The Game    --(* + *)--\n\n");
      
   }
   

   

   printf("Press 1 If You Want To Play Again...\n");
   printf("Press 0 To Exit...\n\n");

scanf("%d",&playagain);

     }
    
    return 0; 
    
}