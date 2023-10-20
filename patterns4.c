// OUTPUT 
// A 
// A B 
// A B C 
// A B C D 


#include <stdio.h>

int main() {
    char val[4] = {'A', 'B', 'C', 'D'}; 
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            switch (j)
            {
            case 1:
                printf("%c ", val[0]);
                break;

            case 2:
                printf("%c ", val[1]);
                break;
            
            case 3:
                printf("%c ", val[2]);
                break;
            
            case 4:
                printf("%c ", val[3]);
                break;
            
            }
        }
        printf("\n");
    }
    
}