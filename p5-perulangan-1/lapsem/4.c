#include <stdio.h>
int main(){
  char response;
  int index = 0;

  while(index < 1){
    printf("Apakah Anda Sudah Sholat? [s/b]\t: ");
    scanf(" %c", &response);

    if(response == 's'){
      index = 1;
      printf("Bagus!");
    } else if(response == 'b'){
      index = 1;
      printf("Aduhai, sholat itu wajib!");
    }
  }
}