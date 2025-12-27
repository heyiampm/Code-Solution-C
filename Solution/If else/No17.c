//📌 Largest three number in  c.

#include<stdio.h>
int main(){
          int a,b,c;
          printf("Enter The Three Any Number: ");
          scanf("%d %d %d",&a,&b,&c);
          if(a >= b && a >= c) {
                    printf("%d is the largest number\n:", a);
          }else if (b >= a && b >= c){
                    printf("%d is the largest number\n:", b);
          }else{
                    printf("%d is the largest number\n:", c);
          }
          return 0;
}