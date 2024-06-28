#include <iostream>
#include <math.h>
using namespace std;
int UCLN (int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
      if (a > b)
	    a -= b;
      else
	    b -= a;
    }
    return a;
}
typedef struct PHANSO
{
    int tuso;
    int mauso;
} PS;

void nhap(PHANSO &a)
{
    cin>>a.tuso;
    cin>>a.mauso;
}
void nhapnhieups(PHANSO a[], int n)
{
    for(int i = 0; i < n; i++)
        nhap(a[i]);
}
void pstg(PHANSO kq)
{
    if(kq.mauso == 0)
        cout<<"Khong thoa yeu cau bai toan";
    else if(kq.tuso != 0){
        int uc = UCLN(kq.tuso,kq.mauso);
        kq.tuso = kq.tuso / uc;
        kq.mauso = kq.mauso / uc;
        if(kq.tuso < 0 && kq.mauso < 0)
            {
                kq.tuso = (-1)*kq.tuso;
                kq.mauso = (-1)*kq.mauso;
            }
        if(kq.tuso > 0 && kq.mauso < 0)
        {
            kq.tuso = kq.tuso * (-1);
            kq.mauso = kq.mauso *(-1);
        }
        if(kq.tuso % kq.mauso == 0)
            cout<<kq.tuso/kq.mauso;
        else
        {
            cout<<kq.tuso <<"/"<<kq.mauso;
        }
    }
    else if(kq.tuso == 0)
        cout<<0;
    else if (kq.mauso == 0)
        cout<<kq.tuso;
}
void xuatnhieups(PHANSO a[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        pstg(a[i]);
        cout<<endl;
    }
}
int main()
{
  PHANSO a[100];
  int n;
  cin>>n;
  nhapnhieups(a,n);
  xuatnhieups(a,n);
  return 0;
}