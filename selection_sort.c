#include <stdio.h>

// my technique check best code in geeksforgeeks

int main(){
    int arr[5];
    int n=5,temp;
    for(int i=0;i<n;i++){
        printf("Enter the element %d :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
