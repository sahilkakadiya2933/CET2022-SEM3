#include <stdio.h>
#include <string.h>


int main(void)
{
    char number[7];
    while(1)
    {
        printf("Enter The Valid Phone Number: ");
        scanf("%s", number);

        if (number[0] == '0' && strlen(number) == 1) {
            break;
        }
        
        if (strlen(number) == 7) 
        {
            if (number[0] == '0' || number[0] == '1') 
            {
                printf("Invalid Input\n");
            }
            else
            {
                printf("The formatted phone number:: %c%c%c-%c%c%c%c\n",
                number[0], number[1], number[2],
                number[3], number[4], number[5],
                number[6]);
                
            }
        }
        
        else
        {
            printf("The number entered is not 7-digits long\n");
        }

    }
    printf("Quit signal received\n");
    return 0;

}
 