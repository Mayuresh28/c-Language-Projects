# include<stdio.h>

int main(){
    int year;
    int a;
    printf("Enter The Year\n");
    
    scanf("%d",&year);
a=  year%4;
if (a==0)
{
  printf("This Is Leap Year");
}
else{
  printf("This Is  not a Leap Year");

}

    return 0; 
    
}