#include<stdio.h>
int main(){
    float radius, area;
    float pi=3.14;

    printf("Enter the radius=");
    scanf("%f", &radius);

    area=(pi*radius*radius);
    printf("area=%.2f\n", area);

    return 0;
}