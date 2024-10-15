#include <stdio.h>
int main() 
{
int num, originalnum, remainder, result = 0;
printf("Enter an integer:");
scanf("%d", &num);
originalnum = num;
while (originalnum != 0) 
{
    remainder = originalnum % 10;
    result += remainder * remainder * remainder;
    originalnum /= 10;
}
if(result == num)
        printf("%d is an Armstrong number.", num);
else
        printf("%d is not an Armstrong number.", num);
}