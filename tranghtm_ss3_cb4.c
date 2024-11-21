#include <stdio.h>

int main(){
	float diemToan, diemVan, diemAnh, tongDiem, diemTb;
	
	printf("Nhap diem toan, van, anh: ");
	scanf("%f %f %f", &diemToan, &diemVan, &diemAnh);
	
	tongDiem = diemAnh + diemToan + diemVan;
	diemTb = tongDiem/3;
	
	printf("Tong diem: %.2f \nDiem tb: %.2f ", tongDiem, diemTb);
	
	
	return 0;
}
