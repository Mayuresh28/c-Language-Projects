#include <stdio.h>

void star(int rows)
{

for (int i = 0; i < rows; i++)
{
   for (int j = 0; j<=i; j++)
   {
       printf("*");
   }
   printf("\n");
}


}
void rstar(int rows)
{

for (int i = 0; i < rows; i++)
{
   for (int j = rows-1; j>=i; j--)
   {
       printf("*");
   }
   printf("\n");
}


}



int main()
{
  int rows;
    int type;
      printf("\n");
      printf("\n");
    printf("For Star Pattern Enter 0\n");
    printf("For Reverse Star Pattern Enter 1\n\n");

    printf("Type of Pattern :\n");
    scanf("%d\n",&type);
    printf("Enter Number Of Rows\n");
    scanf("%d\n",&rows);
    
    

switch (type)
{
case 0:
star(rows);
  break;
case 1:
rstar(rows);
  break;

default:
  break;
}

    return 0;
}
