#include "morse.h"
#include "stdio.h"

int printmorsecode(void)
{
  int i;

  for (i = 0; i <= bufposition; i++)
    printf("%s", buf[i]);
  return 0;
}
