#include <stdio.h>

int main(){
	int a,b,sum,carry;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	while(b!=0){
		sum=a^b;
		carry=(a&b)<<1;
		a=sum;
		b=carry;
	}
	printf("SUM = %d",sum);
}