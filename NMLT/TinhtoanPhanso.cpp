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

void nhap(PHANSO &s)
{
    cin>>s.tuso;
    cin>>s.mauso;
}
PHANSO phepcong(PHANSO a, PHANSO b)
{
    PS kq;
    kq.tuso = (a.tuso * b.mauso) + (a.mauso * b.tuso);
    kq.mauso = (a.mauso * b.mauso);
    return kq;
}
PHANSO pheptru(PHANSO a, PHANSO b)
{
    PS kq;
    kq.tuso = (a.tuso * b.mauso) - (a.mauso * b.tuso);
    kq.mauso = (a.mauso * b.mauso);
    return kq;
}
PHANSO phepnhan(PHANSO a, PHANSO b)
{
    PS kq;
    kq.tuso = (a.tuso * b.tuso);
    kq.mauso = (a.mauso * b.mauso);
    return kq;
}
PHANSO phepchia(PHANSO a, PHANSO b)
{
        PS kq;
        kq.tuso = (a.tuso * b.mauso);
        kq.mauso = (a.mauso * b.tuso);
        return kq;
}
void pstg(PHANSO kq)
{
    int uc = UCLN(kq.tuso,kq.mauso);
    kq.tuso = kq.tuso / uc;
    kq.mauso = kq.mauso / uc;
    if(kq.tuso < 0 && kq.mauso < 0)
    {
        kq.tuso = abs(kq.tuso);
        kq.mauso = abs(kq.mauso);
    }
    else if(kq.tuso > 0 && kq.mauso < 0)
    {
        kq.tuso = (-1) * kq.tuso;
        kq.mauso = abs(kq.mauso);
    }
    if(kq.tuso % kq.mauso == 0)
    {
        cout<<kq.tuso / kq.mauso;
    }
    else{
        cout<<kq.tuso <<"/"<<kq.mauso;
    }
        
}
void xuat(PHANSO kq)
{
    cout<<kq.tuso <<"/"<<kq.mauso;
}
void pheptoan(char x, PHANSO a, PHANSO b)
{
    if(a.mauso == 0 ||  b.mauso == 0)
    {
        cout<<"Khong thoa yeu cau bai toan";
    }
    /*else if(x != '+' || x != '-' || x != '*'|| x != '/')
    {
        cout<<"Khong thoa yeu cau bai toan";
    }*/
    else{
            PS kq;
            switch(x)
            {
                case '+':
                    kq = phepcong(a,b);
                    break;
                case '-':
                    kq = pheptru(a,b);
                    break;
                case '*':
                    kq = phepnhan(a,b);
                    break;
                case '/':
                    kq = phepchia(a,b);
                    break;
            }
            if(x == '/' && kq.mauso == 0)
            {
                cout<<"Phep chia khong xac dinh";   
            }
            else
            {
                pstg(kq);
            }
    }
}
int main ()
{
  PHANSO a;
  PHANSO b;
  PHANSO kq;
  char x;
  nhap(a);
  nhap(b);
  cin>>x;
  pheptoan(x,a,b);  
  
  return 0;
}   