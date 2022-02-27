  #include <stdio.h>
// target: 67,6,5,4,3,2,1

// 7
// 1,2,3,4,5,6,67
// 67,2,3,4,5,6,1
// 67,6,3,4,5,2,1
// 67,6,5,4,3,2,1


void arrayRev(int arr[],int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = arr[i]; 
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{

    int arr[] = {1,2,3,4,5};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr,5);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);
    
    
    return 0;
}
