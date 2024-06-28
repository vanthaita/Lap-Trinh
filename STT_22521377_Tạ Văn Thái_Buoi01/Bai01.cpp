#include <iostream>
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
/*
	Input:
		-Hai số nguyên a và b.
	Output:
		-Một số nguyên là ước chung lớn nhất (UCLN) của a và b.
*/
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
/*
	INPUT : 
		- Mot gia tri phan so 
	OUTPUT :
		= Rut gon phan so roi tra ve mot gia tri phan so
		da rut gon.
*/
void nhapPhanSo(PhanSo &ps)
{
	cin >> ps.tuso >> ps.mauso;
}
void xuatPhanSo(PhanSo ps)
{
	cout << ps.tuso <<"/"<< ps.mauso<<"\n";
}
void xuatnhieuPhanSo(PhanSo ps[], int n)
{
	for(int i = 0 ;i < n;i++)
	{
		xuatPhanSo(ps[i]);
	}
}
PhanSo tongPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
	Mau = ps1.mauso * ps2.mauso;
	PhanSo a = {Tu, Mau};
	return a;
}
/*
	Input:
		-Hai phân số ps1 và ps2, mỗi phân số gồm tử số (tuso)
		và mẫu số (mauso).
	Output:
		-Một phân số a được tính bằng cách cộng hai phân số 
		ps1 và ps2, với tử số là Tu và mẫu số là Mau của phân số a.
*/
PhanSo hieuPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
	Mau = ps1.mauso * ps2.mauso;
	PhanSo a = {Tu, Mau};
	return a;
}
/*
	Input:
		-Hai phân số ps1 và ps2, mỗi phân số gồm tử số (tuso)
		và mẫu số (mauso).
	Output:
		-Một phân số a được tính bằng cách trừ hai phân số 
		ps1 và ps2, với tử số là Tu và mẫu số là Mau của phân số a.
*/
PhanSo tichPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.tuso;
	Mau = ps1.mauso * ps2.mauso;
	PhanSo a = {Tu, Mau};
	return a;
}
/*
	Input:
		-Hai phân số ps1 và ps2, mỗi phân số gồm tử số (tuso)
		và mẫu số (mauso).
	Output:
		-Một phân số a được tính bằng cách nhân hai phân số 
		ps1 và ps2, với tử số là Tu và mẫu số là Mau của phân số a.
*/
PhanSo thuongPhanSo(PhanSo ps1, PhanSo ps2)
{
	int Tu, Mau;
	Tu = ps1.tuso * ps2.mauso;
	Mau = ps1.mauso * ps2.tuso;
	PhanSo a = {Tu, Mau};
	return a;
}
/*
	Input:
		-Hai phân số ps1 và ps2, mỗi phân số gồm tử số (tuso)
		và mẫu số (mauso).
	Output:
		-Một phân số a được tính bằng cách thương hai phân số 
		ps1 và ps2, với tử số là Tu và mẫu số là Mau của phân số a.
*/
PhanSo sosanh2PhanSo(PhanSo ps1, PhanSo ps2)
{
	cout << "Phan so lon hon la : ";
	PhanSo A;
	float max1 = (float) ps1.tuso / ps1.mauso;
	float max2 = (float) ps2.tuso / ps2.mauso;
	(max1 > max2) ? A = ps1 : A = ps2;
	return A;
}
/*
	Input:
		-Hai phân số ps1 và ps2, mỗi phân số gồm tử số (tuso) và mẫu số (mauso).
	Output:
		-In ra màn hình phân số lớn hơn trong hai phân số ps1 và ps2,
 		với tử số và mẫu số tương ứng.
*/
PhanSo timPhanSoLonNhat(PhanSo ps[], int n)
{
  	int num1, num2;
  	PhanSo max = ps[0];
	for(int i = 1; i < n; i++)
	  	{
			num1 = max.tuso * ps[i].mauso;
			num2 = ps[i].tuso * max.mauso;
				if(num1 < num2)
			  	{
					max = ps[i];
			  	}
	  	}
	rutgonPhanSo(max);
	return max;
}
/*
Cau 9 :
	INPUT :
		- Mot so nguyen the hien so luong cac phan so.
		- Mot mang cac phan so.
		- Tim ra phan so lon nhat trong mang cac phan so.
	OUTPUT :
		- Phan so co gia tri lon nhat trong mang.
*/
int main()
{
	//nhapPhanSo(ps1);
	//nhapPhanSO(ps2);
	PhanSo ps1 = {3,5};
	PhanSo ps2 = {2,4};
	cout <<"Cau 2 Xuat cac phan so: \n";
	xuatPhanSo(ps1);
	xuatPhanSo(ps2);
	cout <<"\nCau 3 Rut gon cac phan so: \n";
	rutgonPhanSo(ps1);
	xuatPhanSo(ps1);
	rutgonPhanSo(ps2);
	xuatPhanSo(ps2);

	cout <<"\nCau 4 So sanh hai phan so: \n";

	xuatPhanSo(sosanh2PhanSo(ps1,ps2));

	cout <<"\nCau 5 Cong hai phan so: ";

	xuatPhanSo(tongPhanSo(ps1,ps2));

	cout <<"\nCau 6 Hieu hai phan so: ";

	xuatPhanSo(hieuPhanSo(ps1, ps2));

	cout <<"\nCau 7 Tich hai phan so: ";

	xuatPhanSo(tichPhanSo(ps1, ps2));

	cout <<"\nCau 8 Thuong hai phan so: ";

	xuatPhanSo(thuongPhanSo(ps1, ps2));

	cout <<"\nCau 9 Phan so lon nhat trong cac phan so: \n";
			
	int n = 5;
	PhanSo ps[5] = {{4,5},{8,9},{7,2},{2,3},{3,5}};
	xuatnhieuPhanSo(ps,n);
	cout << "Phan So Long Nhat la: ";
	xuatPhanSo(timPhanSoLonNhat(ps,n));

	return 0;

}