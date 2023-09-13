#include "main.h"
/**
 * print_alphabet- Prints the alphabet, in10x,followed by an \n.
 */
void print_alphabet_x10(void) {
for (int i = 0; i < 10; i++) {
for (char letter = 'a'; letter <= 'z'; letter++) {
putchar(letter);
}
putchar('\n');
}
}
int main(void) {
print_alphabet_x10();
return 0;
}
