# include<stdio.h>
# include<string.h>

int count(char str[],char m){
    int count=0;
for (int i = 0; i <= strlen(str); i++)
{
   if (str[i]==m)
   {
       count++;
   }
   
}
return count;
}


int main(){
    char m;
   char str[20];
   printf("\nEnter The Word\n");
   gets(str);
   
   puts(str);
   printf("\nEnter The Character You Want To Count\n");
    scanf("%c",&m);
   int c=count(str, m);
   printf("\nThe Character You Have Entered Have Occured %d Times \n",c);

   
    return 0; 
    
}