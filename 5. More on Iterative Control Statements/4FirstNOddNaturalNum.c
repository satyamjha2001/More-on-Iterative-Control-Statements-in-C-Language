#include<stdio.h>
int main() {
int i=1,n;
printf("Enter the number: ");
scanf("%d",&n);
printf("First N odd natural number is: ");
do
{
    printf("\n%d",i
    );
    i+=2;
}while(i<=2*n);
return 0;
}