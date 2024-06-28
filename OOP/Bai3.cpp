#include <iostream>
#include <math.h>
using namespace std;
struct PhanSo
{
	int tuso;
	int mauso;
};
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if(a == 0 && b == 0)
		return a;
	if(a == 0 || b == 0)
		return a + b;
	while(a != b){
		if(a > b){
			a = a - b;
		}
		else{
			b = b - a;
		}
	}
	return a;
}
PhanSo rutgonPhanSo(PhanSo &ps)
{
	int c = UCLN(ps.tuso,ps.mauso);
	int Tu = ps.tuso;
	int Mau = ps.mauso;
	if(ps.tuso < 0 && ps.mauso < 0)
	{
		ps.tuso = -1 * Tu; 
		ps.mauso = -1 * Mau;
	}
	if(ps.tuso > 0 && ps.mauso < 0)
	{
		ps.tuso = -1 * Tu;
		ps.mauso = -1 * Mau;
	}
	if(ps.tuso % ps.mauso == 0)
	{
		ps.tuso = (float)Tu / Mau;
		ps.mauso = 1;
	}
	else
	{
		ps.tuso = Tu / c;
		ps.mauso = Mau / c;
	}
	return ps;
	
}
void tongPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
	Mau = ps1.mauso * ps2.mauso;
	PhanSo a = {Tu, Mau};
	rutgonPhanSo(a);
	cout << "Tong 2 phan so : "; 
	cout << a.tuso << "/" << a.mauso <<"\n";
}
void hieuPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
	Mau = ps1.mauso * ps2.mauso;
	PhanSo a = {Tu, Mau};
	rutgonPhanSo(a);
	cout << "Hieu 2 phan so : "; 
	cout << a.tuso << "/" << a.mauso <<"\n";
}
void tichPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.tuso;
	Mau = ps1.mauso * ps2.mauso;
	PhanSo a = {Tu, Mau};
	rutgonPhanSo(a);
	cout << "Tich 2 phan so : "; 
	cout << a.tuso << "/" << a.mauso <<"\n";
}
void thuongPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.mauso;
	Mau = ps1.mauso * ps2.tuso;
	PhanSo a = {Tu, Mau};
	rutgonPhanSo(a);
	cout << "Thuong 2 phan so : "; 
	cout << a.tuso << "/" << a.mauso <<"\n";
}
void xuatPhanSo(PhanSo ps)
{
	if(ps.mauso == 0)
	{
		cout <<"Khong Phai Phan So" << "\n";
	}
	else if(ps.mauso == 1)
	{
		cout << ps.tuso << "\n";
	}
	else
	{
		cout << ps.tuso << "/" << ps.mauso << "\n";
	}
}
void PhanSoLonNhat(PhanSo ps1, PhanSo ps2)
{
    cout << "Phan so lon nhat da rut gon : ";
	float max1 = (float) ps1.tuso / ps1.mauso;
	float max2 = (float) ps2.tuso / ps2.mauso;
	(max1 > max2) ? xuatPhanSo(ps1) : xuatPhanSo(ps2);
}
void nhapPhanSo(PhanSo &ps)
{
	cin >> ps.tuso >> ps.mauso;
}

int main()
{
    PhanSo ps;
	PhanSo ps1;
	PhanSo ps2;
	PhanSo ps3;
	PhanSo ps4;
	do
	{
		cout << "\n\nMENU \n";
		cout << "1. Viết chương trình nhập vào một phân số, rút gọn phân số và xuất kết quả.\n";
		cout << "2. Viết chương trình nhập vào hai phân số, tìm phân số lớn nhất và xuất kết quả.\n";
		cout <<	"3. Viết chương trình nhập vào hai phân số Tính tổng, hiệu, tích, thương giữa chúng và xuất kết quả.\n";
		cout << "4. Thoat menu\n\n";
		int t;
		cin >> t;
		switch(t)
		{
			case 1:
				nhapPhanSo(ps);
				rutgonPhanSo(ps);
				cout << "Phan so sau khi rut gon : ";
				xuatPhanSo(ps);
				break;
			case 2:
				nhapPhanSo(ps1);
				nhapPhanSo(ps2);
				rutgonPhanSo(ps1);
				rutgonPhanSo(ps2);
				PhanSoLonNhat(ps1, ps2);
				break;
			case 3:
				nhapPhanSo(ps3);
				nhapPhanSo(ps4);
				rutgonPhanSo(ps3);
				rutgonPhanSo(ps4);
				tongPhanSo(ps3, ps4);
				hieuPhanSo(ps3, ps4);
				tichPhanSo(ps3, ps4);
				thuongPhanSo(ps3, ps4);
				break;
		}
		if(t == 4)
			break;
	}while(1);

	return 0;
}