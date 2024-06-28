#include <iostream>
using namespace std;
class PhanSo
{
	int tuso;
	int mauso;
	public:
		PhanSo(int tu = 1, int mau = 0) 
		{
			this->tuso = tu;
			this->mauso = mau;
		}
		sp operator+(PhanSo a);
		void operator-();
		friend PhanSo operator+(double a, PhanSo ps);
		friend istream& operator>>(istream &is,PhanSo &ps);
		friend ostream& operator<<(ostream &os, PhanSo &ps);
		operator double();
};
PhanSo::operator double()
{
	return a;
}
istream& operator>>(istream &is, PhanSo &ps)
{
	is >> ps.tuso >> ps.mauso;
	return is;
}
ostream& operator(ostream &os,PhanSo &ps)
{
	os << ps.tuso << "/" << ps.mauso;
	return os;
}
void PhanSo::operator-()
{
	if(this -> mauso < 0)
	{
		this -> mauso *= -1;
	}
	else
	{
		this -> tuso *= -1;
	}
}
PhanSo PhanSo::operator+(PhanSo a)
{
	PhanSo ps;
	ps.tuso = tuso * a.mauso + mauso * a.tuso;
    ps.mauso = mauso *a.mauso;
    return ps;
}
PhanSo operator+(double a, PhanSo ps)
{
	PhanSo res(ps.tuso + a * ps.mauso, ps.mauso);
	return res;
}

void PhanSo::xuat()
{
	cout << tuso << "/" << mauso << endl;
}



int main()
{
	
}