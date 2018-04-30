#include <stdio.h>

//Soma de numeros entre dois numeros

int main(){
	int num1, num2, soma;
  
	printf("Primeiro Numero:");
	scanf("%d",&num1);
  
	printf("Segundo Numero:");
	scanf("%d",&num2);
	
	while(num1 <= num2){
		soma += num1;num1++;
	}
  
	printf("Soma dos numeros:%d",soma);
	return 0;
}
