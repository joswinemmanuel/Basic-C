#include <stdio.h>

int call(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value of arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    call(arr);

}