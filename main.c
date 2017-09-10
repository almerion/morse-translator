#include "morse.h"
#include <stdio.h>

int main()
{
  int i = 0;
  int inputchar;
  char s[BUFFER_SIZE];
  
  while ((inputchar = getchar()) != EOF)
    s[i++] = inputchar;
  convert(s);
  printmorsecode();
  return 0;
}
