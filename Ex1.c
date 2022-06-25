#include <stdio.h>

int sum(){
  int i = 13, s = 0, k = 0;

  do{
    k = k + 1;
    s = s + k;
  }while(k < i);
  
  return s;
}

int main() {

  printf("A soma é de: %d", sum()); 
}