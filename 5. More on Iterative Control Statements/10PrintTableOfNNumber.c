#include<stdio.h>
int main() {
int n,i=1;
printf("Enter the number: ");
scanf("%d",&n);
printf("Table of N is: ");
do
{
    printf("\n%2d * %2d = %2d",n,i,n*i);
    i++;
}while(i<=10);
return 0;
}