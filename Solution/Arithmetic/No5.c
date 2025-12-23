//📌Arithmetic, Relational & Logical Expressions in C.

#include <stdio.h>
int main() {int a = 10, b = 5;
          int sum = a + b;                      // Arithmetic expression
          int isGreater = a > b;              // Relational expression
          int bothTrue = (a > 0) && (b > 0);  // Logical expression
          printf("Sum: %d\n", sum);
          printf("Is A Greater: %d\n", isGreater);
          printf("Both Positive: %d\n", bothTrue);
          return 0;
}