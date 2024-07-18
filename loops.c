#include<stdio.h>

void main()
{
int n, count = 1 ;
float x, average, sum = 0 ;
printf("How many numbers: ") ; // read in a value for n
scanf(%d”, &n) ;
do
{
printf(“x =”) ;
scanf(“%f”, &x ); // read in the numbers * /
sum += x;
++count;
} while (count <= n) ;
// calculate average and write out
average = sum/n ;
printf(“\nThe average is %f\n”, average) ;
}
