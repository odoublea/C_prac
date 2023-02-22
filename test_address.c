#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("Address of 'c' before the call = %p\n", &p);
   modif_my_char_var(p, c);

   printf("Value of 'n' after the call is expected to be 'o' %c\n", c);
   printf("Address of 'c' = %p\n", &p);
   return (0);
}
