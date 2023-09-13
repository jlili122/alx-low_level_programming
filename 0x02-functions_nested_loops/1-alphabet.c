#include <stdio.h>
/** 
 * main - Entry the point of the program 
 * 
 * Return: 0 for successful execution, non-zero for errors 
 */ 
int _putchar(char c) 
{
return write(1, &c, 1);
}
void print_alphabet(void) {
char letter = 'a';
while (letter <= 'z') {
_putchar(letter);
 letter++;
}
_putchar('\n');
}
int main(void) {
print_alphabet();
return (0);
}
