//📌 Count Multiples of 4 in Range.

#include<stdio.h>
int main (){
    int a,b,count=0;
    printf("range of a: ");
    scanf("%d",&a);
    printf("range of b:");
    scanf("%d",&b);

    for(int i=a; i<=b; i++){
        if(i % 4==0){
            count++;
        }
    }
    printf("finally (%d %d):%d", a,b,count);
    return 0;
}
