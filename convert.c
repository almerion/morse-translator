#include "morse.h"
#include <include.h>

#define MORSECHAR_SIZE 5

void convert(char *textInput)
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
      case 
    }
  }
}
