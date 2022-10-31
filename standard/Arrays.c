#include "Arrays.h"
#include <stdio.h>

int getArrayLength(void *array){
     printf("%i", sizeof(array));
     return sizeof(array)/sizeof(array[0]);
}