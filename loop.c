// while loop examples

#include<stdio.h>
int main(){
    int i=1, sum=0;
    while (i<=10)
    {
        /* code */
        sum+=i;
        i++;
    }
    printf("sum is:%d\n", sum);
    return 0;
}