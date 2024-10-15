#include<stdio.h>
void main() 
{
float farenheit,celsius;
printf("enter the value of farenheit:");
scanf("%f",&farenheit);
celsius=((farenheit-32)*5)/9 ;
printf("\ntemperature in celsius is %f",celsius);
printf("\nenter the value of celsius:");
scanf("%f",&celsius);
farenheit=((celsius/5)*9)+32;
printf("temperature in farenheit is %f",farenheit);
}