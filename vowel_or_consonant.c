#include <stdio.h>

int main(){
    char ch;
    printf("Enter any character from a to z : ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("%c is a VOWEL",ch);
    } else {
        printf("%c is a CONSONANT",ch);
    }
    return 0;
}