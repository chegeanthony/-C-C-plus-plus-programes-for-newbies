/*in  this program youre going to find out how to print out one D array*/
#include<stdio.h>//preprosessor command

int main()//main program
{
    int arr[5], i;//array declaration
    for(i = 0; i < 5; i++)//intoduction of a condition
    {
    printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    } 
    printf("\nPrinting elements of the array:");

    return 0;//terminates the function
}
