//initializing m3ltidimensional arrays.

#include <stdio.h>
void printarray(int a[][3]);// function prototype
//function main begins program execution
int main(void)

{
    int array1[2][3] = {{1, 2, 3}, { 4, 5, 6}};
    puts("values in arrays1 by row are:");
    printarray(array1);

    int array2[2][3] = {1, 2, 3, 4, 5};
    puts("values of array2 by row are: ");
    printarray(array2);

    int array3[2][3] = {1, 2, 4,};
    puts("values in arrays3 by row are:");
    printarray(array3);
}
// function to out put array with two rows and three columns
void  printarray(int a[][3]){
    //loop through rows
   {
       
   } for (size_t i = 0; i <= 1; ++i){
            //out put column values
      for (size_t j=0; j<=2; ++j){
                printf("%d", a[i][j]);
      }
      printf("\n");//starts new line of output
    }
}
