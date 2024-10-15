#include<stdio.h>
void main() 
{
int i,n,sum=0;
printf("enter the value of n:");
scanf("%d",&n);
i=1;
while(i<n) 
{
if(n%i==0) 
   sum=sum+i;
   i++;
}
if(sum==n) 
   printf("\n%d is a perfect number",n);
else
   printf("\n%d is not a perfect number",n);
}