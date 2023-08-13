#include <stdio.h>
int main(void){
    //abcdefghijklmnopqrstuvwxyz
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    int i;
    for (i = 25; i >= 0; i--){
        putchar(alphabet[i]);
    }
    putchar('\n');
    return (0);
}
