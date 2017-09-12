#include <stdio.h>
#include "morse.h"

int bufposition;
char buf[BUFFER_SIZE];

int popmorsecode(char s[])
{
  int i = 0;
  while (s != NULL)
    s[i++] = buf[bufposition++];
  return 0;
  
 }
