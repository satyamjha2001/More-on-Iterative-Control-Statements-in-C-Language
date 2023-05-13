#include<stdio.h>
int main() {
int n,i=1;
printf("Enter the number: ");
scanf("%d",&n);
printf("First N natural numbers squares is: ");
do
{
    printf("\n%d",i*i);
    i++;
}while(i<=n);
return 0;
}