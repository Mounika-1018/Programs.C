#include<stdio.h>
void main() 
{
int num,reverse = 0,remainder,original;
printf("Enter the value of num:");
scanf("%d",&num);
original = num;
while (num != 0) 
{
remainder = num % 10;
reverse = reverse * 10 + remainder;
num = num / 10;
}
if (original == reverse) 
printf("%d is a palindrome", original);
else
printf("%d is not a palindrome", original);
}