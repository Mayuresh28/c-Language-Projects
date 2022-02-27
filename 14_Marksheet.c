# include<stdio.h>

int main(){
    int m;
    int s;
    int h;
    int t;
    printf("Enter YOur Marks in Math\n");
   scanf("%d",&m);
    printf("Enter YOur Marks in science\n"); 
   scanf("%d",&s);
    printf("Enter YOur Marks in history\n");
   scanf("%d",&h);
   t= (m + s + h )/3;
   printf("\n\nYour Total Marks Are %d\n",t);
 
 if (m>=33 && s>=33 && h>=33 && t>=40)
 {
    printf("Your Are Passed");
 }
 else{
    printf("Your Are Failed");

 }
 
    return 0; 
    
}