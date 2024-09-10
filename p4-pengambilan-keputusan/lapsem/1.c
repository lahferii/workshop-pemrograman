#include <stdio.h>
int main(){
  int temp;
  
  printf("Masukkan suhu dalam celcius\t : ");
  scanf("%d", &temp);

  if(temp > 30){
    printf("Suhu Sangat Panas.");
  } else if(temp < 0 ){
    printf("Suhu Sangat Dingin.");
  } else {
    printf("Suhu Sangat Sejuk.");
  }

  return 0;
}
