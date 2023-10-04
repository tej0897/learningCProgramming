#include<stdio.h>

int main(){
    float radius, area, circumference, pi = 3.14;
    printf("Enter Radius of the Circle:");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = pi * 2 * radius;

    printf("Area of Circle is: %f and Circumference of Circle is:%f", area, circumference);
    return 0;
}