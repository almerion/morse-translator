#include "morse.h"
#include <stdio.h>

#define MORSECHAR_SIZE 5

void convert(char textinput[])
{
  int inputchar, i;
  char morsechar[MORSECHAR_SIZE];

  i = 0;

  while ((inputchar = getchar) != EOF) {

    switch (inputchar) {
    case 'a': case: 'A':
      morsechar[i] = Am;
    case 'b': case 'B':
      morsechar[i] = Bm;
    case 'c': case 'C':
      morsechar[i] = Cm;
    case 'd': case 'D':
      morsechar[i] = Dm;
    case 'e': case 'E':
      morsechar[i] = Em;
    case 'f': case 'F':
      morsechar[i] = Fm;
    case 'g': case 'G':
      morsechar[i] = Gm;
    case 'h': case 'H':
      morsechar[i] = Hm;
    case 'i': case 'I':
      morsechar[i] = Im;
    case 'j': case 'J':
      morsechar[i] = Jm;
    case 'k': case 'K':
      morsechar[i] = Km;
    case 'l': case 'L':
      morsechar[i] = Lm;
    case 'm': case 'M':
      morsechar[i] = Mm;
    case 'n': case 'N':
      morsechar[i] = Nm;
    case 'o': case 'O':
      morsechar[i] = Om;
    case 'p': case 'P':
      morsechar[i] = Pm;
    case 'q': case 'Q':
      morsechar[i] = Qm;
    case 'r': case 'R':
      morsechar[i] = Rm;
    case 's': case 'S':
      morsechar[i] = Sm;
    case 't': case 'T':
      morsechar[i] = Tm;
    case 'u': case 'U':
      morsechar[i] = Um;
    case 'v': case 'V':
      morsechar[i] = Vm;
    case 'w': case 'W':
      morsechar[i] = Wm;
    case 'x': case 'X':
      morsechar[i] = Xm;
    case 'y': case 'Y':
      morsechar[i] = Ym;
    case 'z': case 'Z':
      morsechar[i] = Zm;
    case '1': 
      morsechar[i] = ONEm;
    case '2':
      morsechar[i] = TWOm;
    case '3':
      morsechar[i] = THEm;
    case '4':
      morsechar[i] = FOUm;
    case '5':
      morsechar[i] = FIVm;
    case '6':
      morsechar[i] = SIXm;
    case '7':
      morsechar[i] = SEVm;
    case '8':
      morsechar[i] = EIGm;
    case '9':
      morsechar[i] = NINm;
    case '0':
      morsechar[i] = ZERm;
    case ' ':
      morsechar[i] = DBLANKm;
    } /* end of switch */

    popmorsecode(morsechar[i]);
    i++;
  }
}
