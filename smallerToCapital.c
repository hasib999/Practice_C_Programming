#include <ctype.h>
#include <stdio.h>

int main(){
    int j = 0;
    char str[] = "hasib";
    char ch;
    while(str[j]){
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
    printf(("%c"));
    return 0;
}