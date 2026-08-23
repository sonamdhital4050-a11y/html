//character based i/o example

#include <stdio.h>
int main(){
    FILE *file=fopen("example.txt","w");
    if(file==NULL) return 1;
    putc('H',file);
    fclose(file);

    file=fopen("example.txt","r");
    if(file==NULL) return 1;
    printf("Character read from file: %c\n", getc(file));
    fclose(file);
    return 0;
}