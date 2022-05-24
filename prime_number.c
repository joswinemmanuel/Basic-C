#include <stdio.h>
#include <math.h>

int main(){
    int num,flag=1;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=2;i<=sqrt(ceil(num));i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }

    if(num==1||num==2||flag){
        printf("%d is a prime number",num);
    } else{
        printf("%d is not a prime number",num);
    }
}