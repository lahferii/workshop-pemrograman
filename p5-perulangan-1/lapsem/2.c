#include <stdio.h>
int main(){
  char next = 'y';
  int input, sum = 0, index = 0;

  while(next == 'y'){
    index++;
    printf("\nMasukkan bilangan ke-%d\t: ", index);
    scanf(" %d", &input);    
    
    printf("Mau memasukkan data lagi? [y/t]\t: ");
    scanf(" %c", &next);

    sum += input;
  }

  printf("\nHasil Penjumlahan\t: %d", sum);
  
  return 0;
}