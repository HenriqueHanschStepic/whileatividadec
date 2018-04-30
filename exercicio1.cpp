#include <stdio.h>

int main(){
  int num;
  //Numero Par ou Impar
  do{
    printf("Numero");
    scanf("%d",&num);
    
    while(num%2=0){
      printf("Par");
      break;
    }
    while(num%=1){
      printf("Impar");
      break;
    }
  }while(true);
  return 0;
}
