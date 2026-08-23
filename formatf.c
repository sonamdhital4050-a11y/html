//formatted i/o example
#include<stdio.h>
int main(){
    FILE *file=fopen("format.txt","w");
    if(file==NULL) return 1;
    fprintf(file, "%d %s %f", 42, "Hello", 3.14);
    fclose(file);
    int num;
    char str[100];
    float flt;
    file=fopen("format.txt","r");
    if(file==NULL) return 1;
    fscanf(file, "%d %s %f", &num, str, &flt);
    printf("Read: %d %s %.2f\n", num, str, flt);
    fclose(file);

    return 0;
}