//📌Sum of Even Numbers up to N.

#include<stdio.h>
int main (){
          int n,i,sum=0;
          printf("Enter the number: ");
          scanf("%d",&n);
          for(i=0;i<=n;i+=2){
                    sum=sum+i;
          }
                    printf("Summation %d",sum);
                    return 0;
}