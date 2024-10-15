#include<stdio.h>
void main()
{
int units;
float bill;
printf("enter the value of units:");
scanf("%d",&units);
if(units<=50)
{
   bill=units*0.50;
   printf("the bill amount is %f",bill);
}
else if(units<=150)
{
    bill=25+(units-50)*0.75;
   printf("the bill amount is %f",bill);
}
else if(units<=250)
{
   bill=112.5+(units-150)*1.20;
   printf("the bill amount is %f",bill);
}
else if(units>250)
{
    bill=300+(units-250)*1.50;
    printf("the bill amount is %f",bill);
}
}