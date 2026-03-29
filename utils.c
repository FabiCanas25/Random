#include "utils.h"
#include <stdio.h>
#include <stdlib.h>


  /*
    Funcion que en decompress mini pasa los enteros a letras del alfabeto, es lo contrario de entryChar. (parte3)
*/

  char newChar(int n){
  if(n >= 1 && n <= 26){
    return (char) (n + 'A' -1);
  } else if (n >= 27 && n <= 52){
    return (char)(n + 'a' - 27);
  }else if (n == 53){
    return ' ';
  }else if (n == 54){
    return '\n';
  }
  return '\0';
}  