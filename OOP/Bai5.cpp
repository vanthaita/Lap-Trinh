#include <iostream>
#include <string>
using namespace std;
struct NhanVien
{
	string manv;
	string hoten;
	string phongban;
	int luongcb;
	int thuong;
	int tongluong;
};
void tongThucLanh(NhanVien nv[], int n)
{
	for(int i = 0; i < n ;i++)
	{
		nv[i].tongluong = nv[i].luongcb + nv[i].thuong;
		cout << "\t Ma Nhan Vien: " << nv[i].manv;
		cout << "\t Ho Ten: " << nv[i].hoten;
		cout << "\t Phong Ban: " << nv[i].phongban;
		cout << "\t Tong Tien Luong: " << nv[i].tongluong << "\n";
	}
}
/*
	INPUT:
		- Mang nhan vien co kich thuoc n chua thong tin cac nhan vien.
	OUTPUT:
		- Tinh tong tien luong roi xuat ra mang hinh.

*/
void xuatNhanVien(NhanVien nv)
{
	cout << "\t Ma Nhan Vien: " << nv.manv;
	cout << "\t Ho Ten: " << nv.hoten;
	cout << "\t Phong Ban: " << nv.phongban;
	cout << "\t Luong Co Ban: " << nv.luongcb;
	cout << "\t Thuong: " << nv.thuong;
	if(nv.tongluong != 0){
		cout << "\t Tong Tien Luong: " << nv.tongluong << "\n";
	}
	else
	{
		cout << "\n";
	}

}
void xuatnhieunv(NhanVien nv[], int n)
{
	cout << "\n\nNhan Vien Cong Ty\n";
	for(int i = 0; i <n ;i++)
	{
		xuatNhanVien(nv[i]);
	}
}
void luongThapNhat(NhanVien nv[], int n)
{
	int min = nv[0].luongcb;
	int temp ;
	for(int i = 0; i < n; i++)
	{
		if(nv[i].luongcb < min){
			min = nv[i].luongcb;
			temp = i;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(nv[i].luongcb == min)
		{
			xuatNhanVien(nv[i]);
		}
	}
}
/*
	INPUT:
		- Mang Nhan vien co kich thuoc n chua thong tin cac nhan vien.
	OUTPUT:
		- Tim ra nhan vien co muc luong co ban thap nhat roi xuat ra man hinh.
*/
int ThuongTheoMoc(NhanVien nv[], int n)
{
	int cnt = 0;
	for(int i =0 ; i < n;i++)
	{
		if(nv[i].thuong >= 1200000)
		{
			cnt++;
		}
	}
	return cnt;
}
/*
	INPUT:
		- Mang Nhan vien co kich thuoc n chua thong tin cac nhan vien.
	OUTPUT:
		- So luong nhan vien co muc thuong lon hon 1200k.

*/
void swap(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void tangDanTheoPhongBan(NhanVien nv[], int n)
{
	for(int i = 0; i < n ;i++)
	{
		for(int j = 0; j < n - i - 1;j++)
		{
			if(nv[j].phongban > nv[j + 1].phongban)
			{
				swap(nv[j],nv[j+1]);
			}
			else if(nv[j].phongban == nv[j+1].phongban)
			{
				if(nv[j].manv < nv[j+1].manv)
				{
					swap(nv[j], nv[j+1]);
				}
			}
		}
	}
}
/*
	INPUT:
		- Mang Nhan vien co kich thuoc n chua thong tin cac nhan vien.
	OUTPUT:
		- Xap sep nhan vien theo phong ban neu trung thi sep giam dan theo ma nhan vien.
*/
void top5nhanvien(NhanVien nv[], int n)
{
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < n - i - 1;j++)
		{
			if(nv[j].tongluong < nv[j+1].tongluong)
			{
				swap(nv[j], nv[j+1]);
			}
		}
	}
	for(int i = 0; i < 5;i++)
	{
		xuatNhanVien(nv[i]);
	}
}
/*
	INPUT:
		- Mang Nhan vien co kich thuoc n chua thong tin cac nhan vien.
	OUTPUT:
		- Xap sep theo muc luong nhan vien roi xuat ra 5 nhan vien cao nhat.
*/
int main()
{
	cout << "Cau 1 Khoi tao tu dong du lieu 10 nhan vien:";
	NhanVien s1 = {"A22521377","NGUYEN VAN A","Sale",7600000,2500000};
	NhanVien s2 = {"B22521367","NGUYEN VAN B","Ke Toan",5150000,2230000};
	NhanVien s3 = {"C22521323","NGUYEN VAN C","Ke Toan",15000000,1350000};
	NhanVien s4 = {"D22521356","NGUYEN VAN D","Van Phong",8985000,1869235};
	NhanVien s5 = {"E22521321","NGUYEN VAN E","Thu Ky",17000000,1256000};
	NhanVien s6 = {"F22521356","NGUYEN VAN F","Nhan Vien",10000000,1545000};
	NhanVien s7 = {"C22521323","NGUYEN VAN R","Sale",11000000,1150000};
	NhanVien s8 = {"D22521356","NGUYEN VAN G","Nhan Vien",5985000,1369235};
	NhanVien s9 = {"E22521321","NGUYEN VAN H","Van Phong",13055000,1156000};
	NhanVien s10 = {"F22521356","NGUYEN VAN J","Nhan Vien",14000000,1045000};
	int n;
	n = 10;
	NhanVien nv[500];

	nv[0] = s1;
	nv[1] = s2;
	nv[2] = s3;
	nv[3] = s4;
	nv[4] = s5;
	nv[5] = s6;
	nv[6] = s7;
	nv[7] = s6;
	nv[8] = s9;
	nv[9] = s10;
	xuatnhieunv(nv,n);
	cout <<"\nCau 2 Tinh tong thuc lanh thang cua tat ca nhan vien trong cong ty: \n";
	tongThucLanh(nv,n);
	cout <<"\nCau 3 In danh sach nhung nhan vien co muc luong co ban thap nhat: \n";
	luongThapNhat(nv,n);
	cout <<"\nCau 4 Dem so nhan vien co muc thuong >= 1200000: \n";
	cout << "\tSo luong nhan vien co muc thuong >= 1200k: " <<ThuongTheoMoc(nv,n) << " Nhan vien";
	cout <<"\nCau 5 tra ve top 5 nhan vien co tien thuc lanh lon nhat: \n";
	top5nhanvien(nv,n);
	cout <<"\nCau 6 In danh sach tang dan theo phong ban neu trung nhau thi giam dan theo ma nhan vien:\n";
	tangDanTheoPhongBan(nv,n);
	xuatnhieunv(nv,n);
	return 0;

}
