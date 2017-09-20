#include <stdlib.h>
#include "morse.h"
#include <stdio.h>

int bufposition;

int main()
{
  int i = 0;
  int inputchar;
  char s[BUFFER_SIZE];

  bufposition = 0;

  while ((inputchar = getchar()) != EOF)
    s[i++] = inputchar;
  convert(s);
  printmorsecode();
  return 0;
}
