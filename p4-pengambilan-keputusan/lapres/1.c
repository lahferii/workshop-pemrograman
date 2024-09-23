#include <stdio.h>
int main(){
  // pak zen gamau revisi soal
  // katanya menyesuaikan aja
  // yasudah, aku ngide
  
  int status, celc;

  printf("Masukkan Suhu\t: ");
  scanf("%d", &celc);

  if(celc > 30){
    status = 1;
  } else if(celc < 0){
    status = 2;
  } else {
    status = 3;
  }

  switch(status){
    case 1 : printf("Suhu Sangat Panas"); break;
    case 2 : printf("Suhu Sangat Dingin"); break;
    case 3 : printf("Suhu Sangat Sejuk"); break;
  }

  return 0;
}