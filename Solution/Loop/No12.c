//📌 Partial Sum On Condition


#include <stdio.h> 
int main() { 
          int i, sum = 0;
          for (i = 10; i >= 1; i--) { 
                    sum += i;
                    if (i%4 == 0)  
                    printf("Sum  = %d\n", sum); 
          } 
          printf("Sum = %d", sum); 
          return 0; 
} 
