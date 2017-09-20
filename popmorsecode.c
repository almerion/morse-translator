/*------------------------------------------*
 * Author         : heari                   *
 * Created Date   : 09/09/17                *
 * Last Update    : 20/09/17                *
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

int popmorsecode(char *s)
{
  malloc(BUFFER_SIZE);

  char *bufp = buf;  /* pointer for buf */
  char *arr = s;  /* pointer to the morse code*/

  int i = 0;
  while (s != NULL) {
    arr = bufp; 
    arr++;
    bufp++;
  }
  return 0;
}
