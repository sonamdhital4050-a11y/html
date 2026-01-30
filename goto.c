// branching statements 
// goto example

#include<stdio.h>
int main(){
int num;
printf("enter positive num:");
scanf("%d", &num);
if (num<0){
    
    goto message;
}
printf("you entered a positive num: %d\n", num);
goto end;
message:
printf("error:you entered a negative num.\n");
end:
printf("program ended.\n");
return 0;

}