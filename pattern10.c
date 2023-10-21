// OUTPUT
//   * 
//   * * 
//   * * * 
//   * * * * 
// * * * * * * 
// * * 
// * * * 
// * * * * 
// * * * * *


#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 4; i++)
    {
        printf("  "); 
        for (int j = 1; j <= i; j++)
        {
            printf("* "); 
        }
        printf("\n"); 
    }


    for (int i = 0; i < 6; i++)
    {
        printf("* ");
    }
    printf("\n");


    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* "); 
        }
        printf("\n");
        
    }
    
    return 0;
}
