#include <stdio.h>
int main(){
  int a, b, c;
  
  printf("Masukkan angka pertama\t : ");
  scanf("%d", &a);
  
  printf("Masukkan angka kedua\t : ");
  scanf("%d", &b);
  
  printf("Masukkan angka ketiga\t : ");
  scanf("%d", &c);
  
  if(a < b){
  	if(a < c){
  		printf("Angka Terkecil Adalah %d", a);
	  } else {
	  	printf("Angka Terkecil Adalah %d", c);
	  }
  } else if(b < c){
  	printf("Angka Terkecil Adalah %d", b);
  } else {
	printf("Angka Terkecil Adalah %d", c);
  }
  
  return 0;
}
