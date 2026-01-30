// if else if ladder


#include<stdio.h>
int main(){
        int marks;

        printf("enter your marks: ");
        scanf("%d" , &marks);

        if (marks>=80)
        {
            printf("distinction\n");
            
        } else if (marks>=60)
        {
            printf("first division\n");

        }else if (marks>=50)
        {
            printf("second division\n");
            

        }else if (marks>=40)
        {
            printf("pass\n");
            

        }else if(marks<40){
            printf("fail\n");
        }
        
        return 0;
    }
        
        
        

