#include <stdio.h>

typedef struct datetime
{
    int day;
    int month;
    int year;
    int hrs;
    int min;
    int sec;
} date;

int comp(date arr[])
{
    if (arr[0].year > arr[1].year)
    {
        return 1;
    }
    if (arr[0].year < arr[1].year)
    {
        return -1;
    }
    if (arr[0].month > arr[1].month)
    {
        return 1;
    }
    if (arr[0].month < arr[1].month)
    {
        return -1;
    }
    if (arr[0].day > arr[1].day)
    {
        return 1;
    }
    if (arr[0].day < arr[1].day)
    {
        return -1;
    }
    if (arr[0].hrs > arr[1].hrs)
    {
        return 1;
    }
    if (arr[0].hrs < arr[1].hrs)
    {
        return -1;
    }
    if (arr[0].min > arr[1].min)
    {
        return 1;
    }
    if (arr[0].min < arr[1].min)
    {
        return -1;
    }
    if (arr[0].sec > arr[1].sec)
    {
        return 1;
    }
    if (arr[0].sec < arr[1].sec)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    date arr[2];

    char n1[10];
    char n2[10];
    printf("\n\nEnter Name Of 1st Candidate\n");
    gets(n1);
    printf("\n\nEnter Name Of 2nd Candidate\n");
    gets(n2);

    printf("\n\nEnter Brthdate Of 1st Candidate in Form Of : DD/MM/YYYY Hr:Min:Sec\n");
    scanf("%d/%d/%d %d:%d:%d", &arr[0].day, &arr[0].month, &arr[0].year, &arr[0].hrs, &arr[0].min, &arr[0].sec);
    printf("\n\nEnter Brthdate Of 2nd Candidate in Form Of : DD/MM/YYYY Hr:Min:Sec\n");
    scanf("%d/%d/%d %d:%d:%d", &arr[1].day, &arr[1].month, &arr[1].year, &arr[1].hrs, &arr[1].min, &arr[1].sec);

    printf("\n\n\n%s's Birthdate : %d/%d/%d %d:%d:%d\n", n1, arr[0].day, arr[0].month, arr[0].year, arr[0].hrs, arr[0].min, arr[0].sec);
    printf("\n%s's Birthdate : %d/%d/%d %d:%d:%d\n\n", n2, arr[1].day, arr[1].month, arr[1].year, arr[1].hrs, arr[1].min, arr[1].sec);

    int m = comp(arr);
    if (m == 1)
    {
        printf("Mayuresh Is Younger");
    }
    else if (m == -1)
    {
        printf("Hrushikeshh Is Younger");
    }
    else if (m == 0)
    {
        printf("Both are of same age");
    }

    return 0;
}