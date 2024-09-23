#include <stdio.h>
int main(){
  int students, currentInt, index = 0;
  double  sum, avg;

  printf("Masukkan Jumlah Mahasiswa\t: ");
  scanf("%d", &students);

  while(index < students){
    printf("Masukkan Nilai Ke-%d\t: ", index + 1);
    scanf("%d", &currentInt);

    if(currentInt < 0){
      continue;
    } else {
      sum += currentInt;
      index++;
    }
  }
  avg = sum / students;
  
  printf("\nNilai Total\t: %.1f", sum);
  printf("\nRata Rata\t: %.1f", avg);
  
  return 0;
}