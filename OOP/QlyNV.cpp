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
	int songaycong;
	int tienluong;
};
void nhap(SANXUAT sx)
{
	getline(cin , sx.hoten);
	cin >> sx.namsinh.ngay >> sx.namsinh.thang >> sx.namsinh.nam;
	cin >> sx.sosp >> sx.luongcb;
}
void nhap(VANPHONG vp)
{
	getline(cin , vp.hoten);
	cin >> vp.namsinh.ngay >> vp.namsinh.thang >> vp.namsinh.nam;
	cin >> vp.songaycong;
}

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
	cout <<"\t So Ngay Cong: " << vp.songaycong;
	cout <<"\t Tien Luong: " << vp.tienluong <<"\n";
}

void tinhluong(SANXUAT &sx)
{
	sx.tienluong = sx.luongcb + sx.sosp * 5000;
}
void tinhluong(VANPHONG &vp)
{
	vp.tienluong = vp.songaycong * 100000;
}
/*
	INPUT:
		- Mang sx hay vp chua thong tin cac nhan vien.
	OUTPUT:
		- Tinh tien luong cac nhan vien.
*/
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

/*
	INPUT:
		- Mang sx hay vp chua thong tin cac nhan vien.
	OUTPUT:
		- Tinh tong tien luong cac nhan vien.
*/
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
			else if(sx[j].namsinh.ngay == sx[j+1].namsinh.ngay && sx[j].namsinh.thang == sx[j+1].namsinh.thang && sx[j].namsinh.nam == sx[j+1].namsinh.nam)
			{
				if(sx[j].tienluong < sx[j+1].tienluong)
				{
					swap(sx[j],sx[j+1]);
				}
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
			else if(vp[j].namsinh.ngay == vp[j+1].namsinh.ngay && vp[j].namsinh.thang == vp[j+1].namsinh.thang && vp[j].namsinh.nam == vp[j+1].namsinh.nam)
			{
				if(vp[j].tienluong < vp[j+1].tienluong)
				{
					swap(vp[j],vp[j+1]);
				}
			}
		}
	}
}
/*
	INPUT:
		- Mang sx hay vp co chua kich thuoc n hay m chua cac thong tin cua cac nhan vien.
	OUTPUT:
		- Mang sx hay vp da duoc sap xet theo ngay sinh hay tien luong.
*/
void nhanvienCoTienLuongLonNhat(SANXUAT sx[],int n)
{
	int max = sx[0].tienluong;
	for(int i = 0; i < n;i++)
	{
		if(sx[i].tienluong > max)
		{
			max = sx[i].tienluong;
		}
	}
	for(int i = 0 ; i < n;i++)
	{
		if(sx[i].tienluong == max)
		{
			xuat(sx[i]);
		}
	}
}
void nhanvienCoTienLuongLonNhat(VANPHONG vp[],int n)
{
	int max = vp[0].tienluong;
	for(int i = 0; i < n;i++)
	{
		if(vp[i].tienluong > max)
		{
			max = vp[i].tienluong;
		}
	}
	for(int i = 0 ; i < n;i++)
	{
		if(vp[i].tienluong == max)
		{
			xuat(vp[i]);
		}
	}
}
/*
	INPUT:
		- Mang sx hay vp co chua kich thuoc n hay m chua cac thong tin cua cac nhan vien.
	OUTPUT:
		- Xuat ra man hinh nhan vien co tien luong lon nhat.
*/
int main()
{
	SANXUAT sx[500];
	VANPHONG vp[500];
	//cout << "Cau 1 Nhap nv san xuat va van phong:\n";
	//nhap(sx);
	//nhap(vp);
	SANXUAT s1 = {"NGUYEN VAN A", 20, 10, 1990,50, 3e6};
	SANXUAT s2 = {"NGUYEN VAN B", 3, 2, 2003,38, 5e6};
	SANXUAT s3 = {"NGUYEN VAN C", 3, 2, 2003,38, 7e6};

	VANPHONG s4 = {"NGUYEN VAN D", 3, 2, 1997,28};
	VANPHONG s5 = {"NGUYEN VAN E", 27, 3, 2001,35};
	VANPHONG s6 = {"NGUYEN VAN F", 27, 3, 2001,30};
	int n = 3;
	int m = 3;

	sx[0] = s1;
	sx[1] = s2;
	sx[2] = s3;

	vp[0] = s4;
	vp[1] = s5;
	vp[2] = s6;
	cout << "\nCau 2 xuat ra thong tin cac nhan vien:\n";
	xuatnhieunv(sx,n);
	xuatnhieunv(vp,m);
	cout <<"\nCau 3 Tinh tong tien luong phai tra cho nhan vien:\n";
	int tongluongnv = tongluong(sx,n) + tongluong(vp,m);
	cout <<"Tong luong phai tra cho tat ca nhan vien: " << tongluongnv;
	cout <<"\nCau 4 Tim cac nhan vien co tien luong lon nhat: \n";
	nhanvienCoTienLuongLonNhat(sx,n);
	nhanvienCoTienLuongLonNhat(vp,m);
	cout <<"\nCau 5 Tim cac nhan vien tre nhat va tien luong lon nhat:\n";
	tangdan(sx,n);
	cout <<"NHAN VIEN SAN XUAT\n\t";
	xuat(sx[0]);
	tangdan(vp,m);
	cout <<"NHAN VIEN VAN PHONG\n\t";
	xuat(vp[0]);
	return 0;
}
