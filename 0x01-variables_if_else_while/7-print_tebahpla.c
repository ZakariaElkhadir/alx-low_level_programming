#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */

int main(void){
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    int i;
    for (i = 25; i >= 0; i--){
        putchar(alphabet[i]);
    }
    putchar('\n');
    return (0);
}
