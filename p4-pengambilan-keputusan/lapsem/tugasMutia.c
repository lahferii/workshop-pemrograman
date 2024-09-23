#include <stdio.h>
int main(){
	float jariJari, tinggi, hasil;
	
	printf("Jari-Jari\t: ");
	scanf("%f", &jariJari);
	
	printf("Tinggi\t: ");
	scanf("%f", &tinggi);
	
	hasil = 22.0/7.0 * (jariJari * jariJari) * tinggi;
	printf("22.0/7.0 * (%.1f * %.1f) * %.1f = %.1f", jariJari, jariJari, tinggi, hasil);
}
