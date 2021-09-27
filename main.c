#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float toan,van,anh;
		
	printf("nhap diem mon toan ");
	scanf("%f", &toan);
	
	printf("nhap diem mon van ");
	scanf("%f", &van);
	
	printf("nhap diem mon anh ");
	scanf("%f", &anh);
	
	printf ("tong 3 mon %f",toan + van + anh );
	
	return 0;
}
