/*example of auto variable in c*/
#include<stdio.h> // preprocessor command
 
int solve() //main function
{ 
    int a=10,b=20; //initializing local variables
    return a+b;// function calling
} 
int main(){ 
    int s; 
    s=solve(); 
    printf("%d",s); 
    return 0; 
}
