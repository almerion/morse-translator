/*------------------------------------------*
 * Author        : heari                    *
 * Created Date  : 9/9/17                   *
 * Last Update   : 13/9/17                  *
 * Description   : The function is using    *
 *   for communicate with user. It prints   *
 *   the morse codes to terminal.           *
 *------------------------------------------*
 */

#include "morse.h"
#include <stdio.h>

int bufposition;
char buf[BUFFER_SIZE];

int printmorsecode(void)
{
  int i;

  for (i = 0; i <= bufposition; i++)
    printf("%s", buf[i]);
  return 0;
}
