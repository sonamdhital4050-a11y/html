// // greater of two num using if else
// #include<stdio.h>
// int main(){
//     int a, b;

//     printf("enter the num a and b:\t");
//     scanf("%d %d",&a, &b);

//     if (a>b)
//     {
//         /* code */
//         printf("a is greater than b");
//     }else{
//         printf("b is greater than a");
//     }
//     return 0;
    
// }
    
#include<stdio.h>
int main(){
    float radius, area, circum;
    const float pi=3.14;
    printf("enter radius of circle:");
    scanf("%f", &radius);
    area= pi*radius*radius;
    circum=2*pi*radius;
    printf("\n the area and circumference of circle with radius %f\n is %f & %f", radius, area, circum);
    return 0;
}