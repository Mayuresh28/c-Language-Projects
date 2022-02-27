#include <stdio.h>
#include <string.h>
struct travel
{
    char name[50];
    char Dlno[50];
    char route[50];
    int kms;
} d1, d2, d3;

int main()
{

    printf("Enter details of the driver\n\n");
    printf("Enter Your Name :\n");
    scanf("%s", &d1.name);
    printf("Enter Your Driving License Number :\n");
    scanf("%s", &d1.Dlno);
    printf("Enter Your Route :\n");
    scanf("%s", &d1.route);
    printf("Enter Number of Driven Kilometers :\n");
    scanf("%d", &d1.kms);

    printf("\n\n Details of Driver 1\n");
    printf("Name = %s \n", d1.name);
    printf("Driving License Number = %s \n", d1.Dlno);
    printf("Route  = %s \n", d1.route);
    printf("kms = %d \n\n", d1.kms);

    printf("-------------------------------------------\n\n");

    printf("Enter details of the driver\n\n");
    printf("Enter Your Name :\n");
    scanf("%s", &d2.name);
    printf("Enter Your Driving License Number :\n");
    scanf("%s", &d2.Dlno);
    printf("Enter Your Route :\n");
    scanf("%s", &d2.route);
    printf("Enter Number of Driven Kilometers :\n");
    scanf("%d", &d2.kms);

    printf("\n\nDetails of Driver 2\n");
    printf("Name = %s \n", d2.name);
    printf("Driving License Number  = %s \n", d2.Dlno);
    printf("Route = %s \n", d2.route);
    printf("kms = %d \n\n", d2.kms);

    printf("-------------------------------------------\n\n");

    printf("Enter details of the driver\n\n");
    printf("Enter Your Name :\n");
    scanf("%s", &d3.name);
    printf("Enter Your Driving License Number :\n");
    scanf("%s", &d3.Dlno);
    printf("Enter Your Route :\n");
    scanf("%s", &d3.route);
    printf("Enter Number of Driven Kilometers :\n");
    scanf("%d", &d3.kms);

    printf("\n\nDetails of Driver 3\n");
    printf("Name = %s \n", d3.name);
    printf("Driving License Number =  %s \n", d3.Dlno);
    printf("Route = %s\n", d3.route);
    printf("kms  = %d \n\n", d3.kms);

    printf("-------------------------------------------\n\n");

    return 0;
}
