
// #include<stdio.h>
// inline int square(int x){
//     return x * x;

// }
// int main(){
//     int num=5;
//     printf("square of %d is %d\n", num, square(num));
//     return 0;
// }

// #include<stdio.h>
// int factorial(int n){
//     if(n==0)
//     return 1;
//     else
//     return n*factorial(n-1);
// }
// int main(){
//     int num=5;
//     printf("factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }

#include<stdio.h>
int fibonacci(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n, i;
    printf("enter the num of terms:");
    scanf("%d", &n);
    printf("fibonacci series:");
    for(i=0; i<n; i++){
        printf("%d", fibonacci(i));
    }
    return 0;
}