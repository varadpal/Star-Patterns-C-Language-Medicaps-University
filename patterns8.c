//OUTPUT
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
//    * * 
//   * * * 


#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)    
    {
        for (int j = 0; j < (5-i); j++)
        {
            printf(" "); 
        }

        for (int k = 0; k < i; k++)
        {
            printf("* "); 
        }
        printf("\n");
        
    }
    for (int i = 4; i >= 1; i--)
    {
        printf(" ");
        for (int j = 0; j < (4-i); j++)
        {
            printf(" "); 
        }

        for (int k = i; k >= 1; k--)
        {
            printf("* "); 
        }
        printf("\n");
    }
    
    for (int i = 2; i <= 3; i++)
    {
        printf("  ");
        for (int j = 0; j < (3-i); j++)
        {
            printf(" "); 
        }

        for (int k = 0; k < i; k++)
        {
            printf("* "); 
        }
        printf("\n");
    }
    
    
    return 0;
}
