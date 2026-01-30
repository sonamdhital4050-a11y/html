// If-else statement

#include<stdio.h>
int main(){
    int num;
    // input no.
    printf("enter num:");
    scanf("%d", &num);
// check if num is odd or even
    if (num%2==0)
    {
        printf("num %d is even", num);
    }
    else{
        printf("num %d is odd", num);
    }

    return 0;
    
}