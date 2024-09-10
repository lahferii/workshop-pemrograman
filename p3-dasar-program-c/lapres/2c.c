#include <stdio.h>
int main(){
  float luas = 1/2*3.14*5;
  printf("%f", luas);

  // operasi di atas akan selalu menghasilkan nilai 0.000000
  // hal ini dikarenakan komputer tidak dapat membaca pecahan 1/2
  // komputer akan membaca 1/2 sebagai 1 dibagi 2
}