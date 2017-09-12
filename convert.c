#include "morse.h"
#include <stdio.h>

#define MORSECHAR_SIZE 5

int convert(char text[])
{

  int inputchar, i;
  char *morsechar;
  i = 0;

  while ((inputchar = text[i++]) != EOF) {

    switch (inputchar) {
    case 'a': case 'A':
      morsechar = Am;
    case 'b': case 'B':
      morsechar = Bm;
    case 'c': case 'C':
      morsechar = Cm;
    case 'd': case 'D':
      morsechar = Dm;
    case 'e': case 'E':
      morsechar = Em;
    case 'f': case 'F':
      morsechar = Fm;
    case 'g': case 'G':
      morsechar = Gm;
    case 'h': case 'H':
      morsechar = Hm;
    case 'i': case 'I':
      morsechar = Im;
    case 'j': case 'J':
      morsechar = Jm;
    case 'k': case 'K':
      morsechar = Km;
    case 'l': case 'L':
      morsechar = Lm;
    case 'm': case 'M':
      morsechar = Mm;
    case 'n': case 'N':
      morsechar = Nm;
    case 'o': case 'O':
      morsechar = Om;
    case 'p': case 'P':
      morsechar = Pm;
    case 'q': case 'Q':
      morsechar = Qm;
    case 'r': case 'R':
      morsechar = Rm;
    case 's': case 'S':
      morsechar = Sm;
    case 't': case 'T':
      morsechar = Tm;
    case 'u': case 'U':
      morsechar = Um;
    case 'v': case 'V':
      morsechar = Vm;
    case 'w': case 'W':
      morsechar = Wm;
    case 'x': case 'X':
      morsechar = Xm;
    case 'y': case 'Y':
      morsechar = Ym;
    case 'z': case 'Z':
      morsechar = Zm;
    case '1': 
      morsechar = ONEm;
    case '2':
      morsechar = TWOm;
    case '3':
      morsechar = THEm;
    case '4':
      morsechar = FOUm;
    case '5':
      morsechar = FIVm;
    case '6':
      morsechar = SIXm;
    case '7':
      morsechar = SEVm;
    case '8':
      morsechar = EIGm;
    case '9':
      morsechar = NINm;
    case '0':
      morsechar = ZERm;
    case ' ':
      morsechar = DBLANKm;
    default:
      ;
    } /* end of switch */

    popmorsecode(morsechar);
  }
  return 0;
}
