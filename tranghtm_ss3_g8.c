#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, digit4, sum ;

    printf("Nhap so: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("So k hop le!");
        return 1;
    }

    digit1 = num % 10;        
    digit2 = (num / 10) % 10;  
    digit3 = (num / 100) % 10; 
    digit4 = num / 1000;    
	
	sum = digit1 + digit2 + digit3 + digit4;   

    printf("Ket qua: %d", sum );

    return 0;
}
