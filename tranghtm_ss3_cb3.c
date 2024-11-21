#include <stdio.h>

int main(){
	const float pi = 3.14;
	float r, chuVi, dienTich;
	
	printf("Nhap ban kinh: ");
	scanf("%f", &r);
	
	chuVi = 2*pi*r;
	dienTich = pi*r*r;
	
	printf("Chu vi: %.2f -- Dien tich: %.2f ", chuVi, dienTich);
	
	
	return 0;
}
