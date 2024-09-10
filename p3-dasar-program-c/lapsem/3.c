#include <stdio.h>
int main(){
  int a, b, c;

  printf("Masukkan Bilangan Pertama\t : ");
  scanf("%d", &a);

  printf("Masukkan Bilangan Kedua\t : ");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;

  printf("\nNilai Bilangan Pertama Saat Ini Adalah %d", a);
  printf("\nNilai Bilangan Kedua Saat Ini Adalah %d", b);

  return 0;
}