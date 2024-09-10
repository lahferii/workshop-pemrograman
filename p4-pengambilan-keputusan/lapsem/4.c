#include <stdio.h>
int main(){
	int pemakaian, biaya, denda;
	
	printf("Masukkan Pemakaian Rekening\t : ");
	scanf("%d", &pemakaian);
	
	if(pemakaian <= 100){
		biaya = 100000;
		
		printf("Biaya Pemakaian Adalah %d", biaya);
	} else if(pemakaian <= 500){
		denda = pemakaian - 100;
		biaya = 100000 + (denda * 1500);
		
		printf("Biaya Pemakaian Adalah %d", biaya);
	} else if(pemakaian > 500){
		denda = pemakaian - 500;
		biaya = 700000 + (denda * 2000);
		
		printf("Biaya Pemakaian Adalah %d", biaya);
	}
}
