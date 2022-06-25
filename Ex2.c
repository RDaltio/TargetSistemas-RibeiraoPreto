#include<stdio.h>

int fibonacci(int n){
  int fib = 0, fib1 = 1, fib0 = 0;
    for(int i = 0; i < n; i++){
      fib = fib1 + fib0;

        if(fib == n){
        printf("\n%d faz parte da sequencia de Fibonacci\n", fib);    
        printf("\nComposto por: %d + %d", fib0, fib1);
        return 0;
        }
          
      fib0 = fib1;
      fib1 = fib;
    }
  printf("\n%d não faz parte da sequencia de Fibonacci", n);
  return fib;
}

int main (){
  int n;
 
  printf("Informe o número a ser comparado: ");
  scanf("%d", &n);

  fibonacci(n);
  
  return 0;
}