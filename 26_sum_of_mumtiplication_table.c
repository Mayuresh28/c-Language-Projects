#include <stdio.h>

int main()
{
    int num;
    int t;
    int sum = 0;
    printf("Enter No. You Want\n");

    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        t = i * num;
        sum += t;
        printf("The sum of table is %d\n", t);
    }
    printf("\n\nThe sum of table is %d\n", sum);

    return 0;
}