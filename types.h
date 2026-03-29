#ifndef TYPES_H
#define TYPES_H
#include <stdint.h>





/*
    Agrega aqui typedefs, unions, structs, etc. que quieras usar
    No modifiques ni elimines las ya existentes
*/
typedef uint8_t Byte;
typedef uint32_t Word;

typedef struct {
    int size;
    Byte *data;
} sFile;





#endif