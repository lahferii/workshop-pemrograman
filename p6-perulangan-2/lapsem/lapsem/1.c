#include <stdio.h>

int main(){
  int n;

  printf("Input nilai n\t: ");
  scanf("%d", &n);

  for(int i = 0; i <= n; i++){
    for(int j = 0; j < i; j++){
      printf("* ");
    }
    printf("\n");
  }
  for(int i = n - 1; i >= 0; i--){
    for(int j = 0; j < i; j++){
      printf("* ");
    }
    printf("\n");
  }
  
  return 0;
}