#include<stdio.h>

int main()

{
    int number, remain;
    int r=0;
    printf("Enter the Number: ");
    scanf("%d", &number);

    while (number > 0)
    {
       remain = number % 10;
       r = r * 10 + remain;
       number = number/10;
    } 
    
    
    printf("The reversed number is %d\n",r);

    return 0;

}