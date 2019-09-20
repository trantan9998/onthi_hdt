# include<iostream>
#include"NhanVien.h"
#include"Nhanvienquanly.h"
#include"Nhanviensanxuat.h"

# include "stdlib.h"
using namespace std;

int main() {
	int chon;
	Nhanvien nv;
	Nhanvienquanly nvql;
	NhanvienSX nvsx;
		system("cls");
		cout << "on thi" << endl;
		cout << "1. nhap thong tin nhan vien" << endl;
		cout << "2. nhap thong tin nhan vien quan ly"<<endl;
		cout << "3. nhap thong tin nhan vien san xuat"<<endl;
		do {
			cout << "chon chuc nang: " << endl;
			cin >> chon;
			switch (chon)
			{
				case 1: {					
					nv.input();
					nv.output();
					break;
				}
				case 2: {
					nv.input();				
					nvql.input();
					nv.output();
					nvql.output();
					break;
				}
				case 3: {
					nv.input();
					nv.output();
					nvsx.input();
					nvsx.output();
					break;
					
				}
				default:
					break;
				}
		} while (chon!=0);
}