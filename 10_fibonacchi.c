# include<stdio.h>

int fib(int a){
    int result ;
    result= (a-1)+(a-2);
    return result;
}


int main(){
    int n;
   printf("Enter N'th Element\n\n");
   scanf("%d",&n);

printf("\n\nThe Fibonacci Number of %d is %d\n\n",n,fib(n));

    return 0; 
    
}