#include<stdio.h>
void main() {
    int a,b;
    
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);

    if(a==b){
        printf("\n Same Number.");
    }
    else {
        if(a>b){
            printf("\n %d is maximum.",a);
        }
        else{
            printf("\n %d is maximum.",b);
        }
    }
}