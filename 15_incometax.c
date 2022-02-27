# include<stdio.h>

int main(){
   int income;
   int tax;
   printf("Enter Your Income\n");
   scanf("%d",&income);
   printf("\nYour Income is %d\n",income);

   
   if (income<250000)
   {
       printf("You are under income tax slab");
   }
   else if(income >=250000 && income<=500000){
       tax = income * 0.05;
   }
   else if(income >=500000 && income<=1000000){
       tax = income * 0.20;
   }
   else if(income>1000000){
       tax = income * 0.30;
   }
   
  printf("You Have to Pay %d as Tax",tax);

    return 0; 
    
}