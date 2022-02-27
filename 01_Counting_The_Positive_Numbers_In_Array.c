# include<stdio.h>

int func(int arr[],int n){
    int a=0;
   
   for (int i = 0; i < n; i++)
   {
      if (arr[i]>0)
      {
        a=a+1;
      }
      
   }

     return a;
}


int main(){
   
    int arr[]={-5,-6,-7,-8,0,5,-7,-6,3};
  int calc = func(arr,9);
  printf("The Number Of Positive Numbers Are %d",calc);
    return 0; 
    
}