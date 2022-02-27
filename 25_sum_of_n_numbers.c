# include<stdio.h>

int main(){
    int n;
    int sum;
    int i=1;

    printf("Enter Number\n ");
    scanf("%d",&n);
do
{
  sum+=i;
  i++;
} while (i<=n);

    printf("\nThe sum of first %d natural numbers is %d\n",n,sum);
    return 0; 
    
}