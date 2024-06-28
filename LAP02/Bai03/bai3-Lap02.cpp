#include <iostream>
#include <math.h>
using namespace std;

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
    friend class TamGiac;
};

class TamGiac
{
    Diem A, B, C;
    float a, b, c;

public:
    TamGiac(Diem diemA, Diem diemB, Diem diemC) // Cau 1 khoi tao mot tam giac
    {
        A = diemA;
        B = diemB;
        C = diemC;
        DoDai();
    }
    void Xuat() // cau 2 xuat thong tin tam giac
    {
        cout << "A";A.xuat();
        cout << " B";B.xuat();
        cout << " C";C.xuat();
    }
    void DoDai()
    {
        a = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
        b = sqrt(pow((C.x - B.x), 2) + pow((C.y - B.y), 2));
        c = sqrt(pow((C.x - A.x), 2) + pow((C.y - A.y), 2));
    }
    void xetTamGiac(); // Cau 3 xet loai tam giac
    float tinhChuVi(); // cau 4 tinh chu vi tam giac
    float tinhDienTich(); // cau 5 tinh dien tich tam giac
};
void TamGiac::xetTamGiac(){
		if (a < b + c && b < a + c && c < a + b)
        {
            if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            {
                cout << "Day la tam giac vuong\n";
            }
            else if (a == b && b == c)
            {
                cout << "Day la tam giac deu\n";
            }
            else if (a == b || a == c || b == c)
            {
                cout << "Day la tam giac can\n";
            }
            else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
            {
                cout << "Day la tam giac tu\n";
            }
            else
            {
                cout << "Day la tam giac nhon\n";
            }
        }
        else
        {
            cout << "Ba canh a, b, c khong phai la ba canh cua mot tam giac\n";
        }   
}
/*
    INPUT:
        - Thuoc tin class TamGiac
    OUTPUT:
        - Hinh dang tam giac
*/
float TamGiac::tinhChuVi()
{
	return a + b + c;
}
/*
    INPUT:
        - Thuoc tin class TamGiac
    OUTPUT:
        - Chu vi tam giac
*/
float TamGiac::tinhDienTich()
{
	float P = (a + b + c) / 2;
	float S = sqrt(P*(P - a)*(P - b)*(P*c));
	return S;
}
/*
    INPUT:
        - Thuoc tin class TamGiac
    OUTPUT:
        - Dien tich tam giac
*/
int main()
{
    Diem A(4, 4);
    Diem B(2, 8);
    Diem C(3, 7);
    TamGiac tg(A, B, C);
    cout << "Cau 2 xuat thong tin tam giac: \n\t";
    cout << "Tam giac duoc tao boi ba canh: "; 
    tg.Xuat();
    cout << "\nCau 3 Xet loai tam giac: \n\t";
    tg.xetTamGiac();
    cout << "\nCau 4 Tinh chu vi tam giac: \n\t";
    cout << "Chu vi: " << tg.tinhChuVi();
    cout << "\nCau 5 tinh dien tich tam giac: \n\t";
    cout << "Dien tich : "<<tg.tinhDienTich();
    return 0;
}
