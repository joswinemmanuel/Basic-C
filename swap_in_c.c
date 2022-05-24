#include <stdio.h>

int main(){
    int a=100,b=20;
    printf("Before swapping\na = %d and b = %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping\na = %d and b = %d",a,b);
}