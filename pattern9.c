// OUTPUT
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * *


#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < (5-i); j++)
        {
            printf(" "); 
        }
        for (int k = i; k >= 1; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int i = 2; i <= 5; i++)
    {
        for (int j = 0; j < (5-i); j++)
        {
            printf(" "); 
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}