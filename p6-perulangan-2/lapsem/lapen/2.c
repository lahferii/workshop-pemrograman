#include <stdio.h>
int main(){
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 7; j++){
      i < 2 && j < 3 ? printf("* ") : printf("- "); 
    }
    printf("\n");
  }

  return 0;
}