#include <stdio.h>
int main(){
  char letter;

  printf("Nilai Dalam Huruf\t: ");
  scanf("%s", &letter);

  // program dibawah ini bersifat case sensitive
  // huruf kapital dan huruf kecil dianggap berbeda
  // sebagai contoh, A tidak sama dengan a
  if(letter == 'A'){
    printf("Nilai Dalam Angka\t: 4");
  } else if(letter == 'B'){
    printf("Nilai Dalam Angka\t: 3");
  } else if(letter == 'C'){
    printf("Nilai Dalam Angka\t: 2");
  } else if(letter == 'D'){
    printf("Nilai Dalam Angka\t: 1");
  } else if(letter == 'E'){
    printf("Nilai Dalam Angka\t: 0");
  } else{
    printf("Input Tidak Valid");
  }

  // program dibawah ini tidak bersifat case sensitive
  // huruf A dan a dianggap sama
  // program dibawah ini menggunakan logika OR
  // logika OR ada di modul, tapi ga dijelasin
  if(letter == 'A' || letter == 'a'){
    printf("Nilai Dalam Angka\t: 4");
  } 
  else if(letter == 'B' || letter == 'b'){
    printf("Nilai Dalam Angka\t: 3");
  } 
  else if(letter == 'C' || letter == 'c'){
    printf("Nilai Dalam Angka\t: 2");
  } 
  else if(letter == 'D' || letter == 'd'){
    printf("Nilai Dalam Angka\t: 1");
  } 
  else if(letter == 'E' || letter == 'e'){
    printf("Nilai Dalam Angka\t: 0");
  } 
  else{
    printf("Input Tidak Valid");
  }

  return 0;
}