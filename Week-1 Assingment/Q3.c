#include<stdio.h>
void main() {
    int x,y;

    printf("Enter a number : ");
    scanf("%d",&x);

    y=x%2;

    switch(y){
        case 0:
        printf("Number is even.");
        break;

        default:
        printf("Number is odd.");
    }
}