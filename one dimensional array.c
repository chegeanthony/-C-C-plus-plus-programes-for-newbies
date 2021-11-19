/*in  this program youre going to find out how to print out one D array*/
#include<stdio.h>//preprosessor command

int main()//main program
{
    int arr[5], i;//array declaration
    for(i = 0; i < 5; i++)//introduction of a condition
    {
    printf("Enter a[%d]: ", i);//
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("\nArray arr[%d]=%d", i, arr[i]);//output the elements of the array
    }
