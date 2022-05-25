#include <stdio.h>

int main(){
	int n1,n2;
	printf("Enter the value of number 1 : ");
	scanf("%d",&n1);
	printf("Enter the value of number 2 : ");
	scanf("%d",&n2);
	while(n2!=0){
		if(n2>0){
			n1++;
			n2--;
		} else{
			n1--;
			n2++;
		}
	}
	printf("SUM = %d",n1);
}