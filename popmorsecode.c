/*------------------------------------------*
 * Author         : heari                   *
 * Created Date   : 9/9/17                  *
 * Last Update    : 13/9/17                 *
 * Description    : The function pops the   *
 *  morse codes to the buffer that is using *
 *  for printing.                           *
 *------------------------------------------*
 */


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
