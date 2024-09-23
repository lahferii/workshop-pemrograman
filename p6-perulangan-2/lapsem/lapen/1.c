#include <stdio.h>
int main(){
  int baris, kolom;

  printf("Masukkan Jumlah Baris\t: ");
  scanf("%d", &baris);

  printf("Masukkan Jumlah Kolom\t: ");
  scanf("%d", &kolom);

  for(int i = 0; i < baris; i++){
    for(int j = 0; j < kolom; j++){
      printf("A ");
    }
    printf("\n");
  }

  return 0;
}