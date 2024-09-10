#include <stdio.h>
int main(){
  int volume, panjang, lebar, tinggi;

  printf("Masukkan Panjang, Lebar Dan Tinggi\n\n");

  printf("Panjang(cm)\t : ");
  scanf("%d", &panjang);

  printf("Lebar(cm)\t : ");
  scanf("%d", &lebar);

  printf("Tinggi(cm)\t : ");
  scanf("%d", &tinggi);

  volume = panjang * lebar * tinggi;
  printf("Volume nya adalah %d cm kubik.", volume);

  return 0;
}