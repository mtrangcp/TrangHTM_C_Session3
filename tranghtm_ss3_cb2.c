#include <stdio.h>

int main(){
	float temperature;
	
	printf("Nhap do C: ");
	scanf("%f", &temperature);
	
	temperature = temperature*9/5 + 32 ;
	
	printf("Chuyen do C --> F: %.2f", temperature);
	
	
	return 0;
}
