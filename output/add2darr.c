// adding 2D array

#include<stdio.h>
int main(){
    int A[2][2], B[2][2], C[2][2];
    int i,j;

    printf("enter elements of matrix A:\n");
    for ( i = 0; i < 2; i++)
        
        for ( j = 0; j < 2; j++)
            
            scanf("%d", &A[i][j]);
        
    for ( i = 0; i < 2; i++)
        
        for ( j = 0; j < 2; j++)
        
            
            scanf("%d", &B[i][j]);
        
    // for ( i = 0; i < 2; i++)
    // {
        
    //     for ( j = 0; j < 2; j++)
    //     {
            
    //         scanf("%d", &C[i][j]);
    //     }
        
    // }
    for ( i = 0; i < 2; i++)
       
        for ( j = 0; j < 2; j++)
            
            C[i][j]=A[i][j]+B[i][j];

            printf("sum of matrices:\n");
            for ( i = 0; i < 2; i++)
                /* code */
                for ( j = 0; j < 2; j++)
                    /* code */
                    printf("%4d", C[i][j]);
                    printf("\n");
                
                
        
            
        
        
    
    return 0;
    
}