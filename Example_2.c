#include <stdio.h>

int main()
{
    int i = 1;   // loop control variable initialization

    while(i <= 5)   // condition check
    {
        printf("%d ", i);   // executed repeatedly while condition is true
        i++;                // update loop variable
    }

    return 0;   // program ends here
}
