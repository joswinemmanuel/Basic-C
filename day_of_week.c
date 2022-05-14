#include <stdio.h>

int main(){
    int day_num;
    printf("Enter the day number (from 1 to 7) : ");
    scanf("%d",&day_num);
    switch(day_num){
        case 1:
            printf("MONDAY");
            break;
        case 2:
            printf("TUESDAY");
            break;
        case 3:
            printf("WEDNESDAY");
            break;
        case 4:
            printf("THURSDAY");
            break;
        case 5:
            printf("FRIDAY");
            break;
        case 6:
            printf("SATURDAY");
            break;
        case 7:
            printf("SUNDAY");
            break;
        default:
            printf("INVALID day number");
            break;
    }   
}