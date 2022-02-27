# include<stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    printf("\n\nEnter The Numbers For Comparison :\n\n");
    printf("Enter No. 1\n");
    scanf("%d",&a);
    printf("Enter No. 2\n");
    scanf("%d",&b);
    printf("Enter No. 3\n");
    scanf("%d",&c);
    printf("Enter No. 4\n");
    scanf("%d",&d);


    printf("\nFirst No. is %d\n",a);
    printf("\nFirst No. is %d\n",b);
    printf("\nFirst No. is %d\n",c);
    printf("\nFirst No. is %d\n",d);

    if (a>b && a>c && a>d)
    {
        printf("\nThe Greatest Number is %d\n",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("\nThe Greatest Number is %d\n",b);
       
    }
    else if (c>a && c>b && c>d)
    {
        printf("\nThe Greatest Number is %d\n",c);
       
    }
    else if (d>a && d>c && d>a)
    {
        printf("\nThe Greatest Number is %d\n",d);
       
    }
    
    
    return 0; 

    
}