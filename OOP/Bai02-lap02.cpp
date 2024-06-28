#include <iostream>
using namespace std;
class PhanSo
{
	int tuso;
	int mauso;
	public:
		PhanSo(int tu = 1, int mau = 1) // cau 1;
		{
			this->tuso = tu;
			this->mauso = mau;
		}
		void xuat();
		PhanSo 	(); // Cau 3 . rut gon phan so
		PhanSo sosanh2PhanSo(PhanSo ps1, PhanSo ps2); // Cau 4. So sanh 2 phan so
		void cong(PhanSo a); //Cau 5 Cong Hai Phan so
		void tru(PhanSo a); // Cau 6 Hieu hai Phan so
		void tich(PhanSo a); // Cau 7 Tich hai phan so
		void thuong(PhanSo a); //Cau 8 THuong hai phan so
		void TimPhanSoLonNhat(PhanSo a[], int n); // Cau 10 tim phan so lon nhat trong nhieu phan so
};

// cau 2
void PhanSo::xuat()
{
	cout << tuso <<"/" << mauso <<"\n";
}
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
PhanSo PhanSo::rutgonPhanSo()
{
	int c = UCLN(tuso,mauso);
	int Tu = tuso;
	int Mau = mauso;
	if(tuso < 0 && mauso < 0)
	{
		tuso = -1 * Tu; 
		mauso = -1 * Mau;
	}
	if(tuso > 0 && mauso < 0)
	{
		tuso = -1 * Tu;
		mauso = -1 * Mau;
	}
	if(tuso % mauso == 0)
	{
		tuso = (float)Tu / Mau;
		mauso = 1;
	}
	else
	{
		tuso = Tu / c;
		mauso = Mau / c;
	}
	PhanSo ps(tuso, mauso);
	return ps;
}
/*
	INPUT:
		- TT tu 
		- TT mau
	OUTPUT:
		- Phan so da rut gon.
*/

PhanSo PhanSo::sosanh2PhanSo(PhanSo ps1, PhanSo ps2)
{
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

void PhanSo::cong(PhanSo a)
{
        tuso = tuso * a.mauso + mauso * a.tuso;
        mauso = mauso *a.mauso;
}
/*
	INPUT:
		- TT tu 
		- TT mau
	OUTPUT:
		- Phan so da cong hai phan so cho truoc
*/
void PhanSo::tru(PhanSo a)
    {
        tuso = tuso * a.mauso - mauso * a.tuso;
        mauso = mauso * a.mauso;
    }
/*
	INPUT:
		- TT tu 
		- TT mau
	OUTPUT:
		- Phan so da hieu hai phan so cho truoc
*/
void PhanSo::tich(PhanSo a)
    {
        tuso = tuso * a.tuso;
        mauso = mauso * a.mauso;
    }
/*
	INPUT:
		- TT tu 
		- TT mau
	OUTPUT:
		- Phan so da tich hai phan so cho truoc
*/
void PhanSo::thuong(PhanSo a)
    {
        tuso = tuso * a.mauso;
        mauso = mauso * a.tuso;
    }
/*
	INPUT:
		- TT tu 
		- TT mau
	OUTPUT:
		- Phan so da thuong hhai phan so cho truoc
*/
void PhanSo::TimPhanSoLonNhat(PhanSo a[], int n)
{
	int num1, num2;
	for(int i = 1; i < n; i++)
	  	{
			num1 = tuso * a[i].mauso;
			num2 = a[i].tuso * mauso;
				if(num1 < num2)
			  	{
					tuso = a[i].tuso;
					mauso = a[i].mauso;
			  	}
	  	}
}
/*
	INPUT:
		- Mang cac phan so
	OUTPUT:
		- Phan so lon nhat trong mang
*/
int main()
{
	cout <<"Cau 2 xuat phan so: \n";
	PhanSo a(1,4), b(2,5);
	a.xuat();
	b.xuat();
	cout <<"\nCau 3 rut gon phan so: \n";
	a.rutgonPhanSo();
	b.rutgonPhanSo();
	if(a.Getmauso() == 1)
	{
		cout << a.GetTuso();
	}
	else
	{
		a.xuat();
	}
	cout <<"\nCau 4 so sanh 2 phan so:\n";
	PhanSo c = c.sosanh2PhanSo(a,b);
	c.xuat();
	cout<<"Cau 5 Cong hai phan so:\n";
	PhanSo tong = a;
	tong.cong(b);
	tong.rutgonPhanSo();
	tong.xuat();

	cout<<"Cau 6 Hieu hai phan so:\n";
	PhanSo hieu = a;
	hieu.tru(b);
	hieu.rutgonPhanSo();
	hieu.xuat();

	cout<<"Cau 7 Tich hai phan so:\n";
	PhanSo tich = a;
	tich.tich(b);
	tich.rutgonPhanSo();
	tich.xuat();

	cout<<"Cau 8 Thuong hai phan so:\n";
	PhanSo thuong = a;
	thuong.thuong(b);
	thuong.rutgonPhanSo();
	thuong.xuat();
	cout <<"Cau 9 Sao chep hai phan so:\n";
	PhanSo Copy(a);
	Copy.xuat();
	cout<<"Cau 10 Tim phan so lon nhat trong nhieu phan so:\n";

	PhanSo p[] = {PhanSo(3,4),PhanSo(2,5),PhanSo(7,8),PhanSo(8,3),PhanSo(5,4),PhanSo(5,7)};
	int n = 6;
	PhanSo Max;
	Max.TimPhanSoLonNhat(p,n);
	Max.xuat();
	return 0;
}