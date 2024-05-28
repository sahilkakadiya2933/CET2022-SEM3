#include<stdio.h>

int main()

{
    int number;
    int c=0;
    printf("Enter the Number: ");
    scanf("%d", &number);
    printf("Number of digit in %d is ",number);
    while (number != 0)
    {
        /* code */
        number = number/10;
        c = c + 1;
    } 
    
    
    printf("%d\n",c);

    return 0;

}