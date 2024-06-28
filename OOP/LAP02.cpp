#include <iostream>
#include <math.h>
using namespace std;
class ToaDo
{
	float x;
	float y;
	public:
		ToaDo(float tungdo = 0, float hoanhdo = 0) // Cau 1 Khoi tao 1 diem
		{
			this->x = tungdo;
			this->y = hoanhdo;
		}
		xuat() // Cau 2 xuat toa do mot diem
		{
			cout << "(" << x << "," << y << ")\n";
		}
		int GetTungDO() // Cau 3 Lay tung do mot diem
		{
			return x;
		}
		int GEtHoanhDo() // Cau 3 Lay hoanh do mot diem
		{
			return y;
		}
		void SetTungDo(float tungdo) // Cau 4 thay doi tung do mot diem
		{
			this->x = tungdo;
		}
		void SetHoanhdo(float hoanhdo) // Cau 4 thay doi tung do mot diem
		{
			this->y = hoanhdo;
		}
		void GOTO(float tungdo, float hoanhdo) // Cau 5 di chuyen den toa do
		{
			this->x = tungdo;
			this->y = hoanhdo;
		}
		void xoadiem() // Cau 8 xoa toa do diem
		{
			this->x = 0;
			this->y = 0;
		}
		float KhoangCach(ToaDo b); // Cau 6 Khoang cach hai diem
		ToaDo TrungDiem(ToaDo b); // Cau 7 Tim trung diem khi biet hai diem
		void Copy(ToaDo a); // Cau 9 Sao chep diem toa do
		ToaDo TimKhoangCachLonNhat(ToaDo a[], int n); // Cau 10 Tim khoang cach nhan nhat so voi tam o trong nhieu toa do
};

float ToaDo::KhoangCach(ToaDo b)
{
	float temp = 0;
	temp = sqrt((b.x - this->x) * (b.x - this->x) + (b.y - this->y) * (b.y - this->y));
	return temp;
}
/*
	INPUT:
		- TT tung do
		- TT hoanh do
	OUTPUT:
		- Tra ve gia tri khoang cach

*/
ToaDo ToaDo::TrungDiem(ToaDo b)
{
	ToaDo temp(0,0);
	temp.x = (x + b.x) / 2;
	temp.y = (y + b.y) / 2;
	return temp;
}
/*
	INPUT:
		- TT tung do
		- TT hoanh do
	OUTPUT:
		- Tra ve toa do trung diem

*/
void ToaDo::Copy(ToaDo a)
{
	x = a.x;
	y = a.y;
}
/*
	INPUT:
		- TT tung do
		- TT hoanh do
	OUTPUT:
		- Tra ve toa do da sao chep
	
*/
ToaDo TimKhoangCachLonNhat(ToaDo a[], int n)
{
	ToaDo O;
	int flag;
	float Max = O.KhoangCach(a[0]);
	for (int i = 0; i < n; i++)
	{
		float tmp = O.KhoangCach(a[i]);
		if(tmp > Max)
		{
			Max = tmp;
			flag = i;
		}
	}
	return a[flag];
}
/*
	INPUT:
		- 1 Mang toa do 
	OUTPUT:
		- Tra ve toa do co khoang cach lon nhat
*/
int main()
{
	cout << "Cau 2 xuat toa do mot diem: \n";
	ToaDo a(3,2);
	ToaDo b(4,2);
	a.xuat();
	b.xuat();
	cout <<"Cau 3 Lay tung do, hoanhdo cua mot diem:\n";
	cout << "Tung do cua diem a: " << a.GetTungDO() <<"\n";
	cout << "Hoanh do cua diem b: " << b.GEtHoanhDo() <<"\n";
	
	cout <<"Cau 4 Thay doi tung do, hoanhdo cua mot diem: \n";
	cout <<"Thay tung do cua diem a = 10: \n";
	a.SetTungDo(10);
	a.xuat();
	cout <<"Thay hoanh do cua diem b = 100: \n";
	b.SetHoanhdo(100);
	b.xuat(); 
	cout <<"Cau 5 di chuyen den diem (155, 199): \n";
	a.GOTO(155,199);
	a.xuat();
	cout <<"Cau 6 Khoang cach giua hai diem a va b: \n";
	a.xuat();
	b.xuat();
	cout << a.KhoangCach(b) <<"\n";
	cout <<"Cau 7 Tim toa do trung diem khi biet hai diem a va b: \n";
	a.xuat();
	b.xuat();
	ToaDo p;
	p = a.TrungDiem(b);
	p.xuat();
	cout <<"Cau 8 xoa toa do diem: \n";
	a.xoadiem();
	a.xuat();
	cout <<"Cau 9 sao chep diem toa do: \n";
	ToaDo temp(78,23);
	a.Copy(temp);
	a.xuat();
	cout << "Cau 10 Tim khoang cach nhan nhat so voi tam o trong nhieu toa do: \n";
	ToaDo arr[] = {ToaDo(4,5), ToaDo(54,75), ToaDo(23,4), ToaDo(2,4)};
	int n = 4;
	ToaDo Sui = TimKhoangCachLonNhat(arr,n);
	Sui.xuat();



	return 0;
}

// Tim khoang cach nhan nhat so voi tam o trong nhieu toa do;