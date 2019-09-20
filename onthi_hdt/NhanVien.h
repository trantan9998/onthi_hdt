#pragma once
#include<string>
class Nhanvien
{
private:
	char hoten[20];
	int ngaysinh;
	char quequan[20];
public:
	Nhanvien();
	Nhanvien(char* hoten, int ngaysinh, char* quequan);
	void input();
	void output();
};


