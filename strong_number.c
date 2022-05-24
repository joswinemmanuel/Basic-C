#include <stdio.h>

int main(){
    int num,p,sum=0,mul=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    p=num;
    while(p!=0){
        for(int i=1;i<=(p%10);i++){
            mul*=i;
        }
        sum+=mul;
        mul=1;
        p/=10;
    }

    if(sum==num){
        printf("%d is a strong number",num);
    } else{
        printf("%d is not a strong number",num);
    }
    
    return 0;
}