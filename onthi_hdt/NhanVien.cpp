#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;

void Nhanvien::input() {
	cout << "nhap ho ten: " << endl;
	cin >> hoten;
	cout << "nhap ngay sinh: " << endl;
	cin >> ngaysinh;
	cout << "nhap que quan: " << endl;
	cin >> quequan;
}
void Nhanvien::output() {
	cout << "ho ten: " << hoten;
	cout << "ngay sinh" << ngaysinh;
	cout << "que quan:" << quequan;
}