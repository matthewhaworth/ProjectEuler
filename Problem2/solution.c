#include <stdio.h>

int main()
{
    int total = 0;
    int oneAgo = 1;
    int twoAgo = 0;
    for (int fib = oneAgo + twoAgo; fib < 4000000; fib = oneAgo + twoAgo) {
        if (fib % 2 == 0) {
            total += fib;
        }
        
        twoAgo = oneAgo;        
        oneAgo = fib;
    }

    printf("Total: %d\n", total);
}
