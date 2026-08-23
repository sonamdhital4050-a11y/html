//string based i/o example
#include <stdio.h>
int main(){
    FILE *file=fopen("eg.txt","w");
    if (file==NULL) return 1;
    fputs("Hello, World!", file);
    fclose(file);
    char buffer[100];
    file=fopen("eg.txt","r");
    if (file==NULL) return 1;
    fgets(buffer, sizeof(buffer), file);
    printf("String read from file: %s\n", buffer);
    fclose(file);
    return 0;
}