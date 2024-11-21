#include <stdio.h>

int main(){
	float a, h, S;
	
	printf("Nhap canh: ");
	scanf("%f", &a);
	
	printf("Nhap chieu cao: ");
	scanf("%f", &h);
	
	S = a*h/2;
	
	printf("Dien tich tam giac: %.2f", S);
	
	
	return 0;
}
