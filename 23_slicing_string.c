# include<stdio.h>
void slice(char str[],int a, int b){
    int i;
    for ( i = 0; i < b; i++)
    {
       str[i]=str[a+i];
    }
   str[i]='\0'; 
    
}
int main(){
    
    char str[]={"Mayuresh"};
slice(str,0,4);
printf("%s",str);
    return 0; 
    
}