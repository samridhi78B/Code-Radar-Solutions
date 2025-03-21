#include <stdio.h>
#include <math.h>

// Function to determine if a number is prime
int isPrime(int r) {
    if (r <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= r-1; i++) { // Check divisors up to sqrt(r)
        if (r % i == 0) {
            return 0; // Not prime if divisible
        }
    }
    return 1; // Prime if no divisors are found
}

