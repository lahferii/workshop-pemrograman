#include <stdio.h>
int main(){
  char name[50], phone[15];
  int age;

  printf("Masukkan Data Diri Anda\n\n");

  printf("Nama\t : ");
  // scanf dibawah ini tidak mengizinkan penggunaan spasi, pilih sesuai kebutuhan
  // scanf("%s", &name);
  //scanf dibawah ini mengizinkan penggunaan spasi, pilih sesuai kebutuhan
  scanf(" %[^\n]", &name);

  printf("Umur\t : ");
  scanf("%d", &age);

  printf("Telpon\t : ");
  scanf("%s", &phone);

  printf("Hello %s, umur %d, no telpon %s\n", name, age, phone);
  printf("Bagaimana kabar anda hari ini?");

  return 0;
}