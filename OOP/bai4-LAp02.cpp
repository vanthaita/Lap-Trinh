#include <iostream>
#include <math.h>
using namespace std;

const float PI = 3.14;
class Diem
{
    float x;
    float y;
public:
    Diem(float tungdo = 0, float hoanhdo = 0) // Khoi tao 1 diem
    {
        this->x = tungdo;
        this->y = hoanhdo;
    }
    void xuat() // xuat toa do mot diem
    {
        cout << "(" << x << "," << y << ")";
    }
    friend class Circle;
};


class Circle
{
	Diem I;
	float R;

	public:
		Circle(Diem Tam, float BanKinh)
		{
			I = Tam;
			R = BanKinh;
		}
		xuat()
		{
			cout << "Tam: " << "I";I.xuat();
			cout << "\n\tBan kinh: " << R << "cm";
		}
		float Chuvi(); // Cau 3 Tinh chu vi duong tron
		float DienTich(); // Cau 4 Tinh dien tich duong tron
		void scalePlus(float percent); // Cau 5 phong to duong tron theo phan tram
		void scaleDiv(float percent); // Cau 6 thu nho duong tron theo phan tram
		bool giaonhau(Circle a); // Cau 7 kiem tra giao nhau giua hai duong tron
};
float Circle::Chuvi()
{
	float Chuvi = 2 * R * PI;
	return Chuvi;
}
float Circle::DienTich()
{
	float DienTich = PI * pow(R,2);
	return DienTich;
}
void Circle::scalePlus(float percent)
{
	this -> R = this -> R * (1 + percent / 100);
}
void Circle::scaleDiv(float percent)
{
	this -> R = this -> R * percent / 100;
}
bool Circle::giaonhau(Circle a)
{
	float d = sqrt(pow(a.I.x - I.x,2) + pow(a.I.y - I.y,2)); 	
	if(d > R + a.R)
	{
		return false;
	}
	if(d == R + a.R)
	{
		return true;
	}

	return true;
}	
int main()
{
	Diem I(1,1);
	float R = 4;
	Circle C(I,R);
	cout << "Cau 2 xuat thong tin duong tron: \n\t";
	C.xuat();
	cout <<"\nCau 3 Tinh chu vi duong tron: \n\t";
	cout << "Chu vi duong tron: " << C.Chuvi();
	cout <<"\nCau 4 Tinh dien tich duong tron: \n\t";
	cout <<"Dien tich duong tron: " << C.DienTich();
	cout <<"\nCau 5 Phong to duong tron theo phan tram: \n";
	Diem O(0,0);
	float Ra = 5;
	Circle A(O,Ra);
	cout<<"\t"; A.xuat();
	cout << "\nPhong to len 30%: \n\t";
	A.scalePlus(30);
	A.xuat();
	cout <<"\n\nCau 6 Thu nho duong tron theo phan tram: \n";
	Diem P(2,5);
	float Rb = 6;
	Circle B(P,Rb);
	cout<<"\t"; B.xuat();
	cout << "\nThu nho lai 50%: \n\t";
	B.scaleDiv(50);
	B.xuat();
	cout << "\nCau 7 cho hai duong tron, kiem tra chung co giao nhau khong: \n";
	Diem d1(2,5);
	Circle D1(d1,7);
	Diem d2(3,6);
	Circle D2(d2,9);
	if(D1.giaonhau(D2) == false)
	{
		cout <<"\tHai duong tron khong giao nhau\n";
	}
	else
	{
		cout <<"\tHai duong tron giao nhau\n";
	}
	return 0;
}