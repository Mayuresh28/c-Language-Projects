#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int op, repeat;
    int arr[100];
    int result = 0;
    printf("\n\n------------Welcome To Spidy's Calculator------------");
    printf("\n\n\nEnter 1 for ADDITION\n");
    printf("Enter 2 for SUBTRACTION\n");
    printf("Enter 3 for MULTIPLIATION\n");
    printf("Enter 4 for DIVISION\n");
    printf("Enter 5 for POWER FUNCTION\n\n");

    printf("----------------------------------------------------------------\n\n");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("_____________________________________________________________\n");
        printf("Enter Number Of Values\n");
        scanf("%d", &repeat);
        printf("\nYou have to enter %d Values\n", repeat);

        printf("_____________________________________________________________\n");
        for (int i = 0; i < repeat; i++)
        {
            printf("\nEnter %d Number : ", i + 1);
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < repeat; i++)
        {

            result = result + arr[i];
        }

        printf("Your Sum of %d numbers  = %d\n\n", repeat, result);
    }
    else if (op==2)
      {
     
        printf("_____________________________________________________________\n");
        for (int i = 0; i < 2; i++)
        {
            printf("\nEnter %d Number : ", i + 1);
            scanf("%d", &arr[i]);
        }

        result = arr[0]-arr[1];

        printf("\nYour Subtraction is %d\n\n", result);
    }
    else if (op==3)
    {
        result = 1;
        printf("_____________________________________________________________\n");
        printf("Enter Number Of Values\n");
        scanf("%d", &repeat);
        printf("\nYou have to enter %d Values\n", repeat);

        printf("_____________________________________________________________\n");
        for (int i = 0; i < repeat; i++)
        {
            printf("\nEnter %d Number : ", i + 1);
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < repeat; i++)
        {

            result = result * arr[i];
        }

        printf("\nYour Product of %d numbers  = %d\n\n", repeat, result);
    
    }
    else if (op==4)
    {
        
        

        printf("_____________________________________________________________\n");
        for (int i = 0; i < 2; i++)
        {
            printf("\nEnter %d Number : ", i + 1);
            scanf("%d", &arr[i]);
        }

     result = arr[0]/arr[1];

        printf("\nYour division is %d\n\n",  result);
    }
        
    else if (op==5)
    {
        result = 1;
       int num, power ;
       printf("\nEnter a Number : ");
       scanf("%d",&num);
       printf("\nEnter a power of number you want to raise : ");
       scanf("%d",&power);

       for (int i = 0; i < power ; i++)
       {
          result = result * num ;
       }
       
       printf("\nYour Raised Number is %d\n", result);

    }
    
    printf("----------------------------------------------------------------\n");
    return 0;
}