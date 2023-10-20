// OUTPUT
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * *


#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= ((5-i)*2); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("* "); 
        }
        printf("\n");
    }
    
}