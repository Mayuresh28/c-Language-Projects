# include<stdio.h>

int main(){
    int p;
    int r ;
    int n ;
    int si;
    
    printf("Enter The Value OF p\n");
    scanf("%d",&p);
    printf("Enter The Value OF r\n");
    scanf("%d",&r);
    printf("Enter The Value OF n\n");
    scanf("%d",&n);
  si= (p * r * n)/100;
  printf("Simple interest is %d",si);
    return 0; 
    
}