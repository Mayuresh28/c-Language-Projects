#include <stdio.h>

int main()
{
    int num;
    printf("Enter No. You Want\n");

    scanf("%d", &num);
    for (int i = 10; i > 0; i--)
    {
        printf("\n%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}