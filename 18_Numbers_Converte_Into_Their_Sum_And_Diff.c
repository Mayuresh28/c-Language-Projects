#include <stdio.h>
 

void add(int* a, int* b)
{
    int temp;
    temp = *b - *a;
   *a = *a + *b;
 *b = temp ;
 
}
 
int main()
{
    int x, y ;
    printf("Enter The First Number:");
    scanf("%d",&x);
    printf("Enter The Second Number:");
    scanf("%d",&y);
    printf("Your Numbers Are %d and %d\n",x,y);
    add(&x,&y);
    printf("%d and %d\n",x,y);
 
    return 0;
}