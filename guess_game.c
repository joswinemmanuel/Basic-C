#include <stdio.h>

int main(){
    int guess,ans=5,w=0;
    printf("Guess the number between 1 and 10, only 3 chances \n");
    for(int i=1;i<=3;i++){
        printf("Guess number %d : ",i);
        scanf("%d",&guess);
        if(guess==ans){
            w=1;
            break;
        }
    }
    if(w==1){
        printf("You WON");
    } else {
        printf("You LOST");
    }
}