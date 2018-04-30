#include <stdio.h>

int main(){
	
	//Imprimir numeros impares entre dois numeros
	
    int num1, num2;

    printf("Primeiro numero: ");
    scanf("%d", &num1);

    printf("Segundo numero: ");
    scanf("%d", &num2);
   
	printf("\n");
   
    while (num1 < num2) {
        if (num1 % 2 == 1) {
            printf("%d", num1);
            printf("\n");
        }
        num1++;
    }
    return 0;
}
