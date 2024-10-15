#include<stdio.h>
void main() 
{
int a,b,c,d;
printf("enter the values of a,b,c and d:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b) 
{
  if(a>c) 
  {
  if(a>d) 
  {
    printf("a is biggest");
  }
  }
else
if(b>c) 
{
  if(b>d) 
  {
  printf("b is biggest");
  }
}
}
else
{
if(d>c) 
  printf("d is biggest");
else
  printf("c is biggest");
}
}