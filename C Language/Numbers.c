#include<stdio.h>

int main()

{

    for (int i = 1; i <= 100; i++) 
    {  
        
        if(i%15==0)
        {
            printf("%d: I'm multiple of 3 and 5!!! \n", i);
        }

        else if(i%5==0)
        {
            printf("%d: I'm multiple of 5!!! \n", i);
        }

        else if(i%3==0)
        {
            printf("%d: I'm multiple of 3!!! \n", i);
        }

        else
        {
            printf("%d\n", i);
        }

       

    }
    
    return 0;

    
}
