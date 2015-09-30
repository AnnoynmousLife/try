#include "try.h"

int try_call(void) {
  int *pData = malloc(sizeof(int));
  int data = 0;
  pData[0] = 300;
  data = pData[0];
  free(pData);
  
  return data;
}