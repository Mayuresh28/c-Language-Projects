#include <stdio.h>
#include <stdlib.h>

int Pali(int num)
{
    int reversed = 0;
    int store = num;

    
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    printf("The reversed number is %d\n", reversed);

    if (store == reversed)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("\n\nEnter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    
    if (Pali(number))
    {
        printf("\n\nThis number is a palindrome\n");
    }

    else
    {
        printf("\n\nThis number is not a palindrome\n");
    }

    return 0;
}