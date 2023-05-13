#include<stdio.h>
int main() {
int i=1,n;
printf("Enter the number: ");
scanf("%d",&n);
printf("First N natural number is: ");
do
{
    printf("\n%d",i);
    i++;
}while(i<=n);
return 0;
}