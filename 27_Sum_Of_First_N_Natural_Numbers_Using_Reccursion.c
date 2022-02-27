# include<stdio.h>

int sum(int a){
   if (a == 1)
   {
      return 1;
   }
   else{
       return a + sum(a-1);
   }
   
}


int main(){
    int a;
    printf("Enter The Number\n");
    scanf("%d",&a);

printf("The sum of First %d Natural Numbers Is %d",a,sum(a));
    return 0; 
    
}