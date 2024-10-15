#include<stdio.h>
void main() 
{
int x,y,a,b,i;
printf("enter the values of x and y:");
scanf("%d %d",&x,&y);
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
for(i=x;i<=y;i++) 
{
  if(i%a==0&&i%b==0) 
  {
    printf("\n the values that are divisible by a and b are %d",i);
  }
}
}