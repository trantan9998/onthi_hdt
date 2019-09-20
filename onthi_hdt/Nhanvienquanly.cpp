#include "Nhanvienquanly.h"
#include"NhanVien.h"
#include <iostream>
using namespace std;

void Nhanvienquanly::input() {
	cout << "nhap so ngay lam: ";
	cin >> songaylam;
}
void Nhanvienquanly::output() {
	cout << "so ngay lam la: " << songaylam;
}
