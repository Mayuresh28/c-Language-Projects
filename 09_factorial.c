// #include <stdio.h>
 

// int factorial(int n)
// {
    
//  if(n==1 || n==0){
//      return 1;
//  }else{
// return n * factorial(n-1);
//  }
// }
 
// int main()
// {
//     int n =5 ;
//     printf("The Factorial of %d is %d", n, factorial(n));
 
//     return 0;
// }


#include <stdio.h>
 

 
int main()
{
    int n =7 ;
    
      int fact = 1;
 
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
 
    printf("The Factorial of %d is %d", n, fact);
 
    return 0;
}