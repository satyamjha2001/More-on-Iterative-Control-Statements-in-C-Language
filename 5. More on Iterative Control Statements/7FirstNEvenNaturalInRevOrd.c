#include<stdio.h>
int main() {
int n,i;
printf("Enter the number: ");
scanf("%d",&n);
i=2*n;
printf("First 10 even natural number in reverse order is: ");
do
{
    printf("\n%d",i);
    i-=2;
}while(i>=1);
return 0;
}