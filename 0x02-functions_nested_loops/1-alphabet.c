#include "main.h"
/**
*function:that print alphabet, prints in lowercase
*Description:we  can only use _putchar twice in the code 
*Return: no return
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar (10);
}
