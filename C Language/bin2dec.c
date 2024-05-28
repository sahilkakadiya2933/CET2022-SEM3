#include<stdio.h>

int main()

{
    int number,remain;
    int decimalValue=0,b=1;
    
    printf("Enter a binary Number: ");
    
    scanf("%d", &number);
    
    printf("The decimal equivalent of %d is ", number);
    
    while (number != 0)
    {
        remain = number % 10;
       
        decimalValue = decimalValue + remain*b;

        number = number/10;
       
        b=b*2;
    }

    printf("%d\n", decimalValue);
    
    return 0;

}