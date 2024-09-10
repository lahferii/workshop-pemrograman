#include <stdio.h>
int main(){
  int speed, time, distance;

  printf("Masukkan Kecepatan Dan Waktu Mobil Anda\n\n");

  printf("Kecepatan (m/detik)\t : ");
  scanf("%d", &speed);

  printf("Waktu (detik)\t : ");
  scanf("%d", &time);

  distance = speed * time;
  printf("\nJarak tempuh anda adalah %d meter.", distance);

  return 0;
}