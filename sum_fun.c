#include <stdio.h>
//
int main(){
    int sum(int a,int b){
        return a+b;
    }

    int num1,num2;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    printf("sum of %d and %d is %d",num1,num2,sum(num1,num2));
    return 0;
}
