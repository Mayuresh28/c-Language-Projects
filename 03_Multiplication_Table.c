#include <stdio.h>

int main()
{
    int a;
    printf("\n\nEnter the Number You Want :\n");
    scanf("%d", &a);
    printf("Multiplication Table is\n ");
    for (int i = 0; i < 10; i++)
    {
    printf("%d * %d = %d\n",a,i+1, a*(i+1));
       
    }
    printf("\n");
    printf("Your Multiplication Table Is Done !!!");

 
    return 0;
}
