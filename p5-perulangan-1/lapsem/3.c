#include <stdio.h>
int main(){
  int index = 0, target = 10, guess = 0;

  while(index < 1){
    printf("\nAngka Tebakan\t: ");
    scanf(" %d", &guess);
    
    if(target == guess){
      index = 1;
      printf("Tebakan Anda Benar!");
    } else {
      if(guess < target){
        printf("Tebakan Anda Terlalu Kecil!\n");
      } else{
        printf("Tebakan Anda Terlalu Besar!\n");
      }
    }
  }
}