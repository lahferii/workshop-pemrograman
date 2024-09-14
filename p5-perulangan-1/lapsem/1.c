#include <stdio.h>
int main(){
  int userInput, sum;

  printf("Masukkan Bilangan Bulat Positif\t: ");
  scanf("%d", &userInput);

  for(int index = 0; index <= userInput; index++){
    sum += index;
  }
  
  printf("Hasil penjumlahan dari 1 sampai %d adalah %d", userInput, sum);
}