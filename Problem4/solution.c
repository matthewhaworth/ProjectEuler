#include <stdio.h>
#include <string.h>
#include <math.h>

int isPalindrome(int possiblePalindrome);

int main()
{
    int xy;
    int largestPalindrome = 0;
    for (int x = 100; x < 999; x++) {
        for (int y = 100; y < 999; y++) {
            xy = x * y;
            if (isPalindrome(xy) && xy > largestPalindrome) {
 //               printf("%d %d\n", xy, isPalindrome(xy));
                largestPalindrome = xy;
            }
        }
    } 
    
    printf("%d\n", largestPalindrome);
}

int isPalindrome(int possiblePalindrome)
{
    char str[6];
    sprintf(str, "%d", possiblePalindrome);
    
    int realCharLength = strlen(str);

    int isPalindrome = 1;
    for (int i = 0; i < (int) realCharLength / 2; i++) {
        if (str[i] != str[realCharLength - 1 - i]) {
            isPalindrome = 0;
        }
    }
    
    return isPalindrome;
}
