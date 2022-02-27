# include<stdio.h>

int main(){
    int n;
    int store=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
          store=1;
         
        }
  
    }
    
    if (store==1)
    {
      printf("It is not a prime Number\n");
    }
    else if (store==0)
    {
       printf("It is a prime Number\n");
    }
    
    else{
        printf("Something Went Wrong\n");

    }
    
    return 0; 
    
}