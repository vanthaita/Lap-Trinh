#include <iostream>
#include <math.h>

using namespace std;

struct DATHUC
{
    int n;
    float* heso;
};

void nhapDaThuc(DATHUC* x)
{
    do
    {
        cout << "\nNhap vao so bac cua da thuc: ";
        cin >> x->n;

        if (x->n < 1)
        {
            cout << "So bac da thuc phai loi hon hoac bang 1. Xin kiem tra lai.";
        }
    } while (x->n < 1);

    x->heso = new float[x->n + 1];

    for (int i = 0; i <= x->n; i++)
    {
        cout << "\nNhap vao he so thu " << i << ": ";
        cin >> x->heso[i];
    }
}

void xuatDaThuc(DATHUC* x)
{
    if (x->n == 1)
    {
        cout << x->heso[0] << " + " << x->heso[1] << "x";
    }
    else
    {
        cout << x->heso[0] << " + " << x->heso[1] << "x";

        for (int i = 2; i < x->n; i++)
        {
            cout << " + " << x->heso[i] << "x^" << i;
        }

        cout << " + " << x->heso[x->n] << "x^" << x->n;
    }
}

double tinhDaThuc(DATHUC* x, int a)
{
    double s = 0;

    for (int i = 0; i <= x->n; i++)
    {
        s += x->heso[i] * pow(a, i);
    }

    return s;
}

void nhapnhieuDaThuc(DATHUC* x, int& b)
{
    cout << "Nhap so luong da thuc: ";
    cin >> b;

    for (int i = 0; i < b; i++)
    {
        cout << "\nNhap da thuc thu " << i + 1 << ":";
        nhapDaThuc(&x[i]);
    }
}

void xuatnhieuDaThuc(DATHUC* x, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nDa thuc thu " << i + 1 << ": ";
        xuatDaThuc(&x[i]);
    }
}

void tong2DaThuc(DATHUC* x1, DATHUC* x2)
{
    DATHUC res;
    res.n = max(x1->n, x2->n);
    res.heso = new float[res.n + 1];

    for (int i = 0; i <= res.n; i++)
    {
        float a = 0, b = 0;

        if (i <= x1->n)
        {
            a = x1->heso[i];
        }

        if (i <= x2->n)
        {
            b = x2->heso[i];
        }

        res.heso[i] = a + b;
    }

    xuatDaThuc(&res);
}
int main()
{
    int b;
    cout << "Nhap so luong da thuc: ";
    cin >> b;
    DATHUC *x = new DATHUC[b];

    // Nhập các đa thức và hiển thị chúng
    for(int i = 0; i < b; i++)
    {
        cout << "Nhap da thuc thu " << i + 1 << ": " << endl;
        nhapDaThuc(&x[i]);
        xuatDaThuc(&x[i]);
        cout << endl;
    }

    // Tính giá trị đa thức tại một điểm
    int a;
    cout << "Nhap gia tri x: ";
    cin >> a;
    for(int i = 0; i < b; i++)
    {
        cout << "Gia tri cua da thuc " << i + 1 << " tai x = " << a << " la: ";
        cout << tinhDaThuc(&x[i], a) << endl;
    }

    // Tính tổng của 2 đa thức
    if(b >= 2)
    {
        cout << "Tong cua 2 da thuc dau tien la: ";
        tong2DaThuc(&x[0], &x[1]);
        cout << endl;
    }

    // Giải phóng bộ nhớ
    for(int i = 0; i < b; i++)
    {
        delete[] x[i].heso;
    }
    delete[] x;

    return 0;
}

