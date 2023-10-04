#include<stdio.h>

int main(){
    int length, breadth, area;
    printf("Enter length of the Rectangle:");
    scanf("%d", &length);
    printf("Enter breadth of the Rectangle:");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("Area of Rectangle with length %d, breadth %d is: %d", length, breadth, area);
    return 0;
}