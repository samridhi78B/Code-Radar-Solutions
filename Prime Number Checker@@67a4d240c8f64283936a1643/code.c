#include <stdio.h>
#include <math.h>

// Function to determine if a number is prime
int prime(int r) {
    if (r <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= sqrt(r); i++) { // Loop up to sqrt(r) for efficiency
        if (r % i == 0) {
            return 0; // If divisible, not prime
        }
    }
    return 1; // Prime if no divisors are found
}

int main() {
    int n, num;
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num); // Corrected to use &num
        printf("%d\n", prime(num)); // Fixed missing comma
    }

    return 0;
}
