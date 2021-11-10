#include<stdio.h>// this is known as preprocessor command and it tells  the compiler to include the std input and output files

int main(){

int maths, eng, kiswa, phy, cre;// local variable definations   					
					
printf("enter the values of: maths, eng, kiswa, phy, cre");//prompt the user to enter thw values of subject

scanf("%d%d%d%d%d", &maths, &eng, &kiswa, &phy, &cre );

int average;

average=(maths+eng+kiswa+phy+cre)/5;

printf("average is %d",average);

if(average>=90&&average<=100)

{

printf("grade A");}

else if(average>=80&&average<=90){

printf("grade B");}



else if(average>=70&&average<=80){

printf("grade C");}

else if(average>=60&&average<=70){

printf("grade D");}

else if(average>=50&&average<=60){

printf("print E");}

else {

printf("fail");}

return 0;//return 0 terminates the function
}

