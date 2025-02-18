#include <stdio.h>

int main() {
    unsigned int num = 16; // Example number
    int count = 0;

    if (num == 0) {
        count = 32; // All bits are zero
    } else {
        for (count = 0; (num & (1U << 31)) == 0; count++) {
            num <<= 1; // Shift left
        }
    }

    printf("%d\n", count);
    return 0;
}

