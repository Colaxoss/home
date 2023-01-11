#include <stdio.h> 

int fibonacci(int n){

  if(n == 0){
    return 0;
  } else if(n == 1){
    return 1;
  } else{
    return fibonacci(n-2) + fibonacci(n-1);
  }
}

int main(){
  int zahl;
  printf("\nBitte geben Sie eine Zahl ein: ");
  scanf("%d", &zahl);
  printf("\nDie Fibonacci Zahl beträgt: %d", fibonacci(zahl));
  printf("\n\n");
}


