#include <stdio.h>
int main(){
  // int luas = 1/2*3.14*5;
  // printf("%d", luas);
  // operasi di atas akan bernilai 0 karena 1 / 2 = 0 (dibulatkan)
  // ingat, seluruh angka yang dikalikan dengan 0 akan bernilai 0
  
  // sedangkan operasi yang diharapkan adalah seperti dibawah ini
  float luas = 1.0 / 2.0 * 3.14 * 5;
  printf("%f", luas);
  
  return 0;
}
