#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class SoNguyenTo
{
private:
	int a = 0;
public:
	bool isSoNguyento(int x)
	{
		if(x <= 2){
			return false;
		}
		for(int i = 2; i <= sqrt(x);i++)
		{
			if(x % i == 0){
				return false;
			}
		}
		return true;
	}
	void songuyento(int x)
	{
	    if(isSoNguyento(x) == true)
	    {
	        a = x;
	    }
	    else
	    {
	        cout << x <<" khong phai la so nguyen to\n";
	    }
	}
	void timsonguyentotieptheo()
	{
		int tmp = a;
		if(isSoNguyento(a) == true){
    		while(1)
    		{
    			tmp++;
    			if(isSoNguyento(tmp) == true)
    			{
    			    cout<< tmp;
    				break;
    			}
    		}
		}
	}

};
class Triangle{
private:
	int a;
	int b;
	int c;
public:
	void nhap()
	{
		cin >> a >> b >> c;
	}
	void dangtamgiac()
	{
		if( a<b+c && b<a+c && c<a+b ){
		 	if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
		 		cout<<"Day la tam giac vuong\n";
		 	}
		 	else if(a==b && b==c){
		 		cout<<"Day la tam giac deu\n";
		 	}
		 	else if(a==b || a==c || b==c){
		 		cout<<"Day la tam giac can\n";
		 	}
		 	else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b){ 
		 		cout<<"Day la tam giac tu\n";
		 	}
		 	else{
		 		cout<<"Day la tam giac nhon\n";
		 	}
		}
		else{
 			cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac\n";
		}
	}
	int chuvi()
	{
		return a + b +c;
	}
	double dientich()
	{
		int p = (a + b +c) / 2;
		double s = sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}
};
class Rectangle
{
private:
	int dai;
	int rong;
public:
	void nhap()
	{
		cin >> dai >> rong;
	}
	int chuvi()
	{
		return (dai + rong) / 2;
	}
	int dientich()
	{
		return dai * rong;
	}
};
class PhanSo
{
private:
	int tu;
	int mau;
	int tu1;
	int mau1;
public:
	void nhap()
	{
		cin >> tu >> mau >> tu1 >> mau1;
	}
	void xuat()
	{
		cout << tu <<"/"<< mau;
		cout << endl;
		cout << tu1 << "/" << mau1;
	}
	int UCLN(int &a, int &b)
	{
		a = abs(a);
		b = abs(b);
		if(a == 0 || b == 0)
			return a + b;

		while(a != b)
		{
			if(a > b)
				a -= b;
			else
				b -= a;
		}
		return a;
	}
	void rutgon(int tu, int mau)
	{
		int uoc = UCLN(tu,mau);
		int a = tu;
		int b = mau;
		if(tu < 0 && mau < 0){
			tu *= (-1);
			mau *= (-1);
		}
		else if(tu > 0 && mau < 0)
		{
			tu *= (-1);
			mau *= (-1);
		} 
		if(tu % mau == 0)
			tu = a / mau;
		else
		{
			tu = a / uoc;
			mau = b / uoc;
		}
	}
	void Nghichdao()
	{
		int a = mau;
		int b = tu;
		rutgon(a,b);
		cout << a << "/" << b;
	}

	void add()
	{
		int a;
		int b;
		a = tu * mau1 + tu1 * mau;
		b = mau * mau1;
		rutgon(a,b);
		cout << a << "/" << b << "\n";
	}
	void sub()
	{
		int a;
		int b;
		a = tu * mau1 - tu1 * mau;
		b = mau * mau1;
		rutgon(a,b);
		cout << a << "/" << b << "\n";
	}
	void mul()
	{
		int a;
		int b;
		a = tu * tu1;
		b = mau * mau1;
		rutgon(a,b);
		cout << a <<"/"<< b << "\n";
	}
	void div()
	{
		int a;
		int b;
		a = tu * mau1;
		b = mau * tu1;
		rutgon(a,b);
		cout << a <<"/"<< b << "\n";
	}

};
class SoPhuc
{
private:
	int Thuc;
	int ao;
public:
	void getinfo(int, int);
	void xuat();
	void add();
};
void SoPhuc::getinfo(int phanthuc, int phanao)
{
	Thuc = phanthuc;
	ao = phanao;
}
void SoPhuc::xuat()
{
	cout << Thuc <<"+"<<ao<<"i";
}
void add(SoPhuc a[])
{
	SoPhuc b;
	b.Thuc = a[0].Thuc + a[1].Thuc;
	b.ao = a[0].ao + a[0].ao;
}
int main()
{
	SoPhuc a[2];
	for(int i = 0; i < 2; i++)
	{
		int phanthuc;
		int phanao;
		cin >> phanthuc >> phanao;
		a[i].getinfo(phanthuc, phanao);

	} 
	a[0].xuat();
}

