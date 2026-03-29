#include "types.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>


void decompress_mini(sFile *f) {

  Byte *b = f-> data;
  int v[4];

  for (int i = 0; i < f->size; i += 3){

    v[0] = (b[0] >>2 );
    v[1] = ((b[0] & 0x03) << 4) | (b[1] >> 4);
    v[2] = ((b[1] & 0x0F) << 2) | (b[2] >> 6);
    v[3] = (b[2] & 0x3F);

    for (int j = 0; j < 4; j++){
      if (v[j] > 0){
        putchar(newChar(v[j]));
      }
    }

  }  
  printf("%s", decompressed);

  }
  