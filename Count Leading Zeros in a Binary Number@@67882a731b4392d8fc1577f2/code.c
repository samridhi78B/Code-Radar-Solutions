#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32; // Special case for 0

    int count = 0;
    while ((num & (1U << 31)) == 0) { // Check MSB (Most Significant Bit)
        count++;
        num <<= 1; // Left shift to check next bit
    }
    return count;
}

int main() {
    unsigned int num = 16; // Example number
    printf("%d\n", countLeadingZeros(num));
    return 0;
}


