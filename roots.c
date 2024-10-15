#include<stdio.h>
void main() 
{
float a,b,c;
float dis,result,r1,r2;
printf("enter the values of a,b and c:");
scanf("%f %f %f",&a,&b,&c);
dis=b*b-4*a*c;
printf("\n dis is %f",dis);
result=sqrt(dis);
printf("\n result is %f",result);
r1=(-b+result)/2*a;
printf("\n root1 is %f",r1);
r2=(-b-result)/2*a;
printf("\n root2 is %f",r2);
}