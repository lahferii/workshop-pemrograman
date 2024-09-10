#include <stdio.h>
int main(){
  char letter;

  printf("Masukkan huruf\t : ");
  scanf("%c", &letter);

  switch(letter){
    case 'A' : printf("Nilai angka \t : 4"); break;
    case 'B' : printf("Nilai angka \t : 3"); break;
    case 'C' : printf("Nilai angka \t : 2"); break;
    case 'D' : printf("Nilai angka \t : 1"); break;
    case 'E' : printf("Nilai angka \t : 0"); break;
    default: printf("Input tidak Valid"); break; // baris ini opsional, ga diminta di soal
  }
  
  // program di atas bersifat case sensitive
  // input A akan menampilkan angka 4
  // sedangkan input a akan menampilkan pesan "input tidak valid"
  // kalau mau pake huruf kecil, tambahin aja case baru
  
  return 0;
}
