#include <stdio.h>

void receiveSignal(int sig) {
  printf("HOLA MUNDO\n");
  printf("Recibi sennal %d\n", sig);
}

int main(){
  signal(SIGUSR1, receiveSignal);
  while (1) {
    
  }
  return 0;
}
