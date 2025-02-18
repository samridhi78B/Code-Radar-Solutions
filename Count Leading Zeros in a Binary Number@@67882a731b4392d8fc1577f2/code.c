// Your code here...
#include <stdio.h>

int main() {
    unsigned int num = 16; // Example number
    int count = 0;

    if (num == 0) {
        count = 32; // If number is 0, all bits are zero
    } else {
        while ((num & (1U << 31)) == 0) { // Check leftmost bit
            count++;
            num <<= 1; // Shift left
        }
    }

    printf("%d", count);
    return 0;
}
