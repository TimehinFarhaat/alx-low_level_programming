/*
 * File: 4-print_rev.c
 * 
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	
      char s[1000], r[1000];
   int begin, end, count = 0;
   
     while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }
     r[begin] = '\0';

   _putchar(s[count]);
	_putchar('\n');
}
