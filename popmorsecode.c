/*------------------------------------------*
 * Author         : heari                   *
 * Created Date   : 9/9/17                  *
 * Last Update    : 13/9/17                 *
 * Description    : The function pops the   *
 *  morse codes to the buffer that is using *
 *  for printing.                           *
 *------------------------------------------*
 */

#include <stdlib.h>
#include <stdio.h>
#include "morse.h"

int bufposition = 0;
char buf[BUFFER_SIZE];

int popmorsecode(char s[])
{
  buf[BUFFER_SIZE] = malloc(BUFFER_SIZE);

  int i = 0;
  while (s != NULL)
    s[i++] = buf[bufposition++];
  return 0;
}
