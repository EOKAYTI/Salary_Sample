#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LuongCB 650000

int main() {
	int TNCT;
	printf("\nNhap vao tham nien cong tac cua ban: ");
	scanf("%d",&TNCT);
	float luong;

	if (TNCT < 12) {
		luong = LuongCB * 1.92;
	}
	else if (TNCT >= 12 && TNCT < 36) {
		luong = LuongCB * 2.34;
	}
	else if (TNCT >= 36 && TNCT < 60) {
		luong = LuongCB * 3;
	}
	else if (TNCT >= 60) {
		luong = LuongCB * 4.5;
	}

	
	printf("\nLuong cua ban la: %.0f VND", luong);

	return 0;
}