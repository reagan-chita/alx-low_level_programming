/*
 * File: 1-alphabet.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
  char c = 'a';   /* Declare a character variable and initialize it with the letter 'a' */

  /* Loop through the lowercase alphabet using a while loop */
  while (c <= 'z')
  {
    _putchar(c);   /* Print the current character to stdout using the _putchar function */
    c++;   /* Increment the character variable to the next letter in the alphabet */
  }
  
  _putchar('\n');   /* Print a newline character to stdout using the _putchar function */
}
