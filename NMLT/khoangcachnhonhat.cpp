#include <iostream>
#include <math.h>

using namespace std;
struct DIEM
{
	int x;
	int y;
};
void nhapDSDiem(DIEM a[], int &n)
{
	cin>>n;
	for(int i =0 ; i < n;i++)
	{
		cin >> a[i].x >> a[i].y ;
	}
}

void xuatDSDiem(DIEM a[], int n)
{
	for(int i = 0 ; i < n; i++)
	{
		cout<<"("<< a[i].x <<','<< a[i].y <<")"<<"\n";
	}
}
DIEM diemDoiXungQuaO(DIEM M)
{
	M.x = -M.x;
	M.y = -M.y;
	return M;
}
int khoangCach(DIEM P, const DIEM M)
{
	int sum;
	sum = sqrt(pow(P.x - M.x,2) + pow(P.y - M.y,2));
	return sum;
}

DIEM khoangCachNhoNhat(DIEM a[], int n, DIEM M)
{
	int temp;
	int min = khoangCach(a[0],M);
	for(int i = 0; i < n;i++)
	{
		if(khoangCach(a[i],M) < min){
			min = khoangCach(a[i],M);
			temp = i;
		}
	}
	return a[temp];
}

int main()
{
    DIEM a[100];
    int n;
    nhapDSDiem(a,n); // Nhap danh sach cach diem trong mat phang Oxy
    cout<<"Danh sach diem trong mat phang Oxy:\n";
    xuatDSDiem(a,n); // Xuat danh sach cac diem, moi diem tren 1 dong

    DIEM M,N;
    cout<<"\nNhap mot diem de kiem tra khoang cach: ";
    cin>>M.x>>M.y;

    N = diemDoiXungQuaO(M);
    cout<<"\nDiem doi xung voi ("<<M.x<<","<<M.y<<") qua goc toa do O: ("<<N.x<<","<<N.y<<")";

    N = khoangCachNhoNhat(a,n,M);
    cout<<"\nDiem co khoang cach ngan nhat toi ("<<M.x<<","<<M.y<<"): ("<<N.x<<","<<N.y<<")";


    return 0;
}
