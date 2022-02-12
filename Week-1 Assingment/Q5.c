#include<stdio.h>

void main() {
    float radius,diameter,circumference,area;

    printf("Enter radius of the circle : ");
    scanf("%f",&radius);

    diameter=radius*2;
    circumference=diameter*3.14;
    area=radius*radius*3.14;

    printf("Diameter : %f \n Circumference : %f \n Area : %f",diameter,circumference,area);3
}