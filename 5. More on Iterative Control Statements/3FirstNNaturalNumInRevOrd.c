#include<stdio.h>
int main() {
int i,n;
printf("Enter the number: ");
scanf("%d",&n);
i=n;
printf("First N natural number in reverse order is: ");
do
{
    printf("\n%d",i);
    i--;
}while(i>=1);
return 0;
}