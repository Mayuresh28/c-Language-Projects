# include<stdio.h>

int ave(int a,int b,int c){
    return (a + b + c )/3;
}


int main(){
int a,b,c;
float sum;
  printf("\n\nAverage Calculator!!!\n\n");
  printf("\n\nEnter First Numbeer\n\n");
  scanf("%d",&a);
  printf("\n\nEnter Second Numbeer\n\n");
  scanf("%d",&b);
  printf("\n\nEnter Third Numbeer\n\n");
  scanf("%d",&c);

  sum=ave(a,b,c);
  printf("\n\nThe Average is %f\n\n",sum);
  
    return 0; 
    
}