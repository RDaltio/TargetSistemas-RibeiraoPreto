#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char string[50] = "lanoicnuf sam selpmiS";
  int i, n;

  n = strlen(string);

  for(i = n - 1; i >= 0; i--){
    printf("%c", string[i]);
  }
  
  return 0;
}