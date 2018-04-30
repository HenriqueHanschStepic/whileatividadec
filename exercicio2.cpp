#include <stdio.h>
#include <stdlib.h>

int main() {
  
  //Descobrir se um numero é primo
  
  int cont, num1; 
  int div = 0;
  
  do {
    printf("Digite um número: ");
    scanf("%d", &num1);
  } 
  while (num1 <= 0);
		for (cont = 1; cont <= num1; cont++) {
   			if (num1 % cont == 0) { 
     		div++;
   			}
  		}
  if (div == 2)
    printf("%d é primo!", x);
  else
    printf("%d nao e primo!", x);

  return 0;
}
