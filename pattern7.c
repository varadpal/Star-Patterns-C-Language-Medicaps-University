// OUTPUT
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 


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
    
}