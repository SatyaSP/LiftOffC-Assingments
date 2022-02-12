#include<stdio.h>
void main(){
    float a,b;
    int option;

    printf("Enter two numbers ");
    scanf("%f %f",&a,&b);

    printf("\nEnter the option : ");
	printf("\n1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n");
	scanf("%d",&option);

    switch(option){
        case 1:
        printf("Addition is %f",a+b);
        break;

        case 2:
        printf("Substraction is %f",a-b);
        break;

        case 3:
        printf("Multiplication is %f",a*b);
        break;

        case 4:
        printf("Division is %f",a/b);
        break;
    }
}