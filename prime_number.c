#include<stdio.h>
void main() 
{
int i, n, j = 0;
printf("Enter the value of n: ");
scanf("%d", &n);
if (n < 2) 
{
  printf("%d is not a prime number.\n", n);
}
for (i = 2; i <= n / 2; i++) 
{
  if (n % i == 0) 
{
  j = 1; 
  break;
}
}
if (j == 0)
  printf("%d is a prime number.\n", n);
else
  printf("%d is not a prime number.\n", n);
}