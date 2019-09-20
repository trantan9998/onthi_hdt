#include "Nhanviensanxuat.h"
#include "NhanVien.h"
#include <iostream>
using namespace std;


void NhanvienSX::input() {
	cout << "nhap so luong";
	cin >> soluong;
}
void NhanvienSX::output() {
	cout << "so luong la: " << soluong;
}