// 📌 Prime Numbers from 1 to 100.

#include <stdio.h>
int main(void) {
    for (int i = 2; i <= 100; i++) {
        int Prime = 1;  // assume i is prime

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                Prime = 0;  // found a divisor
                break;
            }
        }
        if (Prime) {
            printf("%d is prime\n", i);
        }
    }
    return 0;
}
