# include<stdio.h>
# include<string.h>

int check(char str[],char m){
    int count=0;
for (int i = 0; i <= strlen(str); i++)
{
   if (str[i]==m)
   {
       count=1;
   }
   
}
return count;
}


int main(){
    char m;
   char str[20];
   printf("\nEnter The Word\n");
   gets(str);
   
   printf("\nYour Entered Word Is %s\n\n",str);
   printf("\nEnter The Character You Want To Check\n\n");
    scanf("%c",&m);
   int c=check(str, m);

   if (c==1)
   {
   printf("\nThe Character is Present in the word\n");
   }
   else if (c==0)
   {
   printf("\nThe Character is Not Present in the word\n");
     
   }
   
   

   
    return 0; 
    
}