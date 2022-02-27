# include <stdio.h>

int main()
{
    char convert;
    int m;
    printf("For M to Cm choose a\n");
    printf("For kg to g choose b\n");
    printf("For kg to Pound choose c\n");
    printf("For celcius to kelvin choose d\n");
    printf("For foot to inch choose e\n\n");
    printf("Choose Conversion\n");
    scanf("%c" , &convert);
    printf("Enter number\n");
    
    scanf("%d",&m );
    switch (convert)
    {
    case 'a':
    
    if (m>0)
    { printf("%d M = %d cm \n",m,m * 100);   }

   break; 
    case 'b':

    if (m>0)
    { printf("%d Kg = %d gram \n",m,m * 1000);   }

   break; 
    case 'c':

    if (m>0)
    { printf("%d Kg = %.3f Pound\n",m,m *2.20 );   }

   break; 
    case 'd':

    if (m>0)
    { printf("%d Celcius = %.2f Kelvin \n",m,m + 273.15);   }

   break; 
    case 'e':

    if (m>0)
    { printf("%d Foot = %d Inch \n",m,m * 12);   }

   break; 

    
    default:
    printf("Something Went Wrong\n");
        break;

    }
    return 0;
}
