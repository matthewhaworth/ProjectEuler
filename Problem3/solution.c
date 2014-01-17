#include <stdio.h>
#include <math.h>

int isPrime(double possiblePrime);

int main()
{
    double biggestPrimeFactor = 0;
    double number = 600851475143;
    for (double i = 0; i < round(sqrt(number)); i++) {
        if (fmod(number, i) == 0 && i > biggestPrimeFactor && isPrime(i)) {
            biggestPrimeFactor = i;
        }
    }
    
    printf("%d\n", (int) biggestPrimeFactor);
}

int isPrime(double possiblePrime)
{
    int divisorCount = 0;
    for (int i = 0; i < round(sqrt(possiblePrime)); i++) {
        if (fmod(possiblePrime, i) == 0) {
            divisorCount++;
        }
    }
    
    return divisorCount == 1;
}
