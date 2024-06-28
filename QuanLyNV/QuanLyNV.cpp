#include <iostream>

using namespace std;

struct NgaySinh
{
	int ngay;
	int thang;
	int nam;

};
struct SANXUAT
{
	string hoten;
	NgaySinh namsinh;
	int sosp;
	float luongcb;
	int tienluong;
};
struct VANPHONG
{
	string hoten;
	NgaySinh namsinh;
	int songaylam;
	int tienluong;
};

void xuat(SANXUAT sx)
{
	cout <<"\t Ho Ten: " << sx.hoten;
	cout <<"\t Ngay Sinh: " << sx.namsinh.ngay <<"/"<< sx.namsinh.thang <<"/"<< sx.namsinh.nam;
	cout <<"\t So San Pham: " << sx.sosp;
	cout <<"\t Luong Co Ban: " << sx.luongcb;
	cout <<"\t Tien Luong: " << sx.tienluong <<"\n";
}
void xuat(VANPHONG vp)
{
	cout <<"\t Ho Ten: " << vp.hoten;
	cout <<"\t Ngay Sinh: " << vp.namsinh.ngay <<"/"<< vp.namsinh.thang <<"/"<< vp.namsinh.nam;
	cout <<"\t So Ngay Lam: " << vp.songaylam;
	cout <<"\t Tien Luong: " << vp.tienluong <<"\n";
}

void tinhluong(SANXUAT &sx)
{
	sx.tienluong = sx.luongcb + sx.sosp * 5000;
}
void tinhluong(VANPHONG &vp)
{
	vp.tienluong = vp.songaylam * 100000;
}

void xuatnhieunv(SANXUAT sx[], int n)
{
	cout <<"\n\nNHAN VIEN SAN XUAT:\n";

	for(int i = 0; i < n;i++)
	{
		tinhluong(sx[i]);
		xuat(sx[i]);
	}
}
void xuatnhieunv(VANPHONG vp[], int m)
{
	cout <<"\n\nNHAN VIEN VAN PHONG:\n";

	for(int i = 0; i < m;i++)
	{
		tinhluong(vp[i]);
		xuat(vp[i]);
	}
}

double tongluong(SANXUAT sx[], int n)
{
	double tong = 0;
	for(int i = 0; i <n;i++)
	{
		tinhluong(sx[i]);
		tong += sx[i].tienluong;
	}
	return tong;
}
double tongluong(VANPHONG vp[], int m)
{
	double tong = 0;
	for(int i = 0; i <m;i++)
	{
		tinhluong(vp[i]);
		tong += vp[i].tienluong;
	}
	return tong;
}


void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void tangdan(SANXUAT sx[], int n)
{
	for(int i = 0 ; i < n;i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(sx[j].namsinh.nam < sx[j+1].namsinh.nam && (sx[j].namsinh.nam != sx[j+1].namsinh.nam))
			{
				swap(sx[j],sx[j+1]);
			}
			else if (sx[j].namsinh.thang < sx[j+1].namsinh.thang && sx[j].namsinh.nam == sx[j+1].namsinh.nam)
			{
				swap(sx[j],sx[j+1]);
			}
			else if(sx[j].namsinh.ngay < sx[j+1].namsinh.ngay && sx[j].namsinh.thang == sx[j+1].namsinh.thang && sx[j].namsinh.nam == sx[j+1].namsinh.nam)
			{
				swap(sx[j],sx[j+1]);
			}
		}
	}
}
void tangdan(VANPHONG vp[], int m)
{
	for(int i = 0 ; i < m;i++)
	{
		for(int j = 0; j < m - i - 1; j++)
		{
			if(vp[j].namsinh.nam < vp[j+1].namsinh.nam && (vp[j].namsinh.nam != vp[j+1].namsinh.nam))
			{
				swap(vp[j],vp[j+1]);
			}
			else if (vp[j].namsinh.thang < vp[j+1].namsinh.thang && vp[j].namsinh.nam == vp[j+1].namsinh.nam)
			{
				swap(vp[j],vp[j+1]);
			}
			else if(vp[j].namsinh.ngay < vp[j+1].namsinh.ngay && vp[j].namsinh.thang == vp[j+1].namsinh.thang && vp[j].namsinh.nam == vp[j+1].namsinh.nam)
			{
				swap(vp[j],vp[j+1]);
			}
		}
	}
}


void sinhnhat(SANXUAT sx[], int n)
{
	int ngay = 18;
	int thang = 2;
	for(int i = 0; i < n;i++)
	{
		if(sx[i].namsinh.ngay < ngay && sx[i].namsinh.thang == thang)
		{
			xuat(sx[i]);
		}
	}
}
void sinhnhat(VANPHONG vp[], int m)
{
	int ngay = 18;
	int thang = 2;
	for(int i = 0; i < m;i++)
	{
		if(vp[i].namsinh.ngay < ngay && vp[i].namsinh.thang == thang)
		{
			xuat(vp[i]);
		}
	}
}

int main()
{

	SANXUAT s1 = {"NGUYEN VAN A", 20, 10, 1990,50, 3e6};
	SANXUAT s2 = {"NGUYEN VAN B", 17, 2, 2003,38, 5e6};
	SANXUAT s3 = {"NGUYEN VAN C", 3, 9, 1990,14, 7e6};

	VANPHONG s4 = {"NGUYEN VAN D", 3, 2, 1997,28};
	VANPHONG s5 = {"NGUYEN VAN E", 27, 3, 2001,25};
	VANPHONG s6 = {"NGUYEN VAN F", 20, 5, 1999,15};

	SANXUAT sx[500];
	VANPHONG vp[500];

	int n = 3;
	int m = 3;

	sx[0] = s1;
	sx[1] = s2;
	sx[2] = s3;

	vp[0] = s4;
	vp[1] = s5;
	vp[2] = s6;
	int tongluongnv = tongluong(sx,n) + tongluong(vp,m);
	do
	{
		cout << "\n\nMENU \n";
		cout << "1. Xuat ra thong tin tat ca cac nhan vien\n";
		cout << "2. Xuat ra tong tien luong phai tra\n";
		cout <<	"3. Xuat cac nhan vien tang dan theo ngay sinh\n";
		cout << "4. Xuat ra cac nhan vien co ngay sinh nhat sap toi gan nhat voi ngay hien tai 18/2\n";
		cout << "5. Thoat menu\n";
		int t;
		cin >> t;
		switch(t)
		{
			case 1:
				xuatnhieunv(sx,n);
				xuatnhieunv(vp,m);
				break;
			case 2:
				cout<<"\n\n";
				cout <<"Tong tien luong phai tra cho tat ca nhan vien: " << tongluongnv;
				break;
			case 3:
				cout<<"\n\n";
				tangdan(vp,m);
				tangdan(sx,n);
				xuatnhieunv(sx,n);
				xuatnhieunv(vp,m);
				break;
			case 4:
				cout<<"\n\n";
				cout<<"Sap toi ngay sinh nhat : \n\n";
				cout<<"NHAN VIEN SAN XUAT:\n";
				sinhnhat(sx,n);
				cout<<"NHAN VIEN VAN PHONG:\n";
				sinhnhat(vp,m);
				break;
		}
		if(t == 5)
			break;
	}while(1);
	return 0;
}
