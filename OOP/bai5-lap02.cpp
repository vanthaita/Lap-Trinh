#include <iostream>
#include <string>

using namespace std;

class NhanVien {
private:
    string maNhanVien;
    string hoTen;
    int luongCoBan;
    int soSanPham;
    int luongHangThang;

public:
    // Cau 1 Tao du lieu nhan vien
    NhanVien() {
        maNhanVien = "";
        hoTen = "";
        luongCoBan = 0;
        soSanPham = 0;
        luongHangThang = 0;
    }
    NhanVien(string maNV, string ten, int luongCB, int soSP) { 
        maNhanVien = maNV;
        hoTen = ten;
        luongCoBan = luongCB;
        soSanPham = soSP;
        luongHangThang = luongCoBan + soSanPham * 175000; // Cau 3 Tinh luong cac nhan vine
        if (luongHangThang >= 10000000) {
            luongHangThang *= 1.1;
        }
    }
    void setLuong() // Cau 5 cap nhan luong nhan vien 
    {
        luongHangThang = luongCoBan + soSanPham * 175000; // Cau 3 Tinh luong cac nhan vine
        if (luongHangThang >= 10000000) {
            luongHangThang *= 1.1;
        }
    }
    void CapNhatLuong(int luong)
    {
        luongCoBan = luong;
        luongHangThang = luongCoBan + soSanPham * 175000;
        if (luongHangThang >= 10000000) {
            luongHangThang *= 1.1;
        }
    }

    string getMaNhanVien() {
        return maNhanVien;
    }

    string getHoTen() {
        return hoTen;
    }

    double getLuongCoBan() {
        return luongCoBan;
    }

    int getSoSanPham() {
        return soSanPham;
    }

    double getLuongHangThang() {
        return luongHangThang;
    }
};
int TimNhanVienTheoMaNv(NhanVien dsNhanVien[], int soLuongNhanVien, string string1) // Cau 4 tim nhan vien theo ma nhan vien
{
    for (int i = 0; i < soLuongNhanVien;i++)
    {
            string flag = dsNhanVien[i].getMaNhanVien();
            if(flag == string1)
            {
                return i;
            }
    }
    return -1;
}

int TimNhanVienLuongMax(NhanVien dsNhanVien[], int soLuongNhanVien) // Cau 6 tim nhan vien co luong cao nhat
{
    int max = dsNhanVien[0].getLuongHangThang();
    for (int i = 0; i < soLuongNhanVien;i++)
    {
            int flag = dsNhanVien[i].getLuongHangThang();
            if(flag > max)
            {
                max = flag;
            }
    }
    return -1;
}


int TimNhanVienSpMin(NhanVien dsNhanVien[], int soLuongNhanVien) // Cau 7 tim nhan vien co luong thap nhat
{
    int min = dsNhanVien[0].getSoSanPham();
    for (int i = 0; i < soLuongNhanVien;i++)
    {
            int flag = dsNhanVien[i].getSoSanPham();
            if(flag < min)
            {
                min = flag;
            }
    }
    return -1;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void TimNhanVienTop10(NhanVien dsNhanVien[], int soLuongNhanVien) // Cau 8 Tim 10 nhan vien co luong cao nhat
{
    for (int i = 0; i < soLuongNhanVien; i++)
    {
        for (int j = 0; j < soLuongNhanVien - i - 1; j++)
        {
            if(dsNhanVien[j].getLuongHangThang() < dsNhanVien[j+1].getLuongHangThang())
            {
                swap(dsNhanVien[j],dsNhanVien[j+1]);
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        cout << dsNhanVien[i].getMaNhanVien() << "\t" << dsNhanVien[i].getHoTen() << "\t" << dsNhanVien[i].getLuongCoBan() << "\t" << dsNhanVien[i].getSoSanPham() << "\t\t" << dsNhanVien[i].getLuongHangThang() << endl;
    }
}


int main() {
    NhanVien dsNhanVien[200];
        NhanVien s1("A2252173","Nguyen Van A",12050120,15);
        NhanVien s2("A2422173","Nguyen Van B",15305300,12);
        NhanVien s3("A2542173","Nguyen Van C",16325100,10);
        NhanVien s4("A2265173","Nguyen Van D",16331300,5);
        NhanVien s5("A2212133","Nguyen Van E",15353135,7);
        NhanVien s6("A2255333","Nguyen Van F",11542535,12);
        NhanVien s7("A2265323","Nguyen Van G",10513431,6);
        NhanVien s8("A2252163","Nguyen Van H",13545343,11);
        NhanVien s9("A2252343","Nguyen Van U",18645252,14);
        NhanVien s10("A2235433","Nguyen Van M",13543643,26);
        NhanVien s11("A2223763","Nguyen Van N",16364525,17);
        NhanVien s12("A2431473","Nguyen Van T",13552245,20);
    int soLuongNhanVien = 12;
        dsNhanVien[0] = s1;
        dsNhanVien[1] = s2;
        dsNhanVien[2] = s3;
        dsNhanVien[3] = s4;
        dsNhanVien[4] = s5;
        dsNhanVien[5] = s6;
        dsNhanVien[6] = s7;
        dsNhanVien[7] = s8;
        dsNhanVien[8] = s9;
        dsNhanVien[9] = s10;
        dsNhanVien[10] = s11;
        dsNhanVien[11] = s12;
    cout << "Cau 2 xuat thong tin cac nhan vien trong cong ty\n";
    cout << "Danh sach nhan vien trong cong ty:" << endl;
    cout << "MaNV\t\t"<< "Ho ten\t\t" << "Luong CB\t" << "So SP"<< endl;
    for (int i = 0; i < soLuongNhanVien; i++) {
        cout << dsNhanVien[i].getMaNhanVien() << "\t" << dsNhanVien[i].getHoTen() << "\t" << dsNhanVien[i].getLuongCoBan() << "\t" << dsNhanVien[i].getSoSanPham() << endl;
    }

    // Cau 3 tinh luong nhan vien trong cong ty
    for (int i = 0; i < soLuongNhanVien; i++) {
        dsNhanVien[i].setLuong();
    }
    cout << "\nCau 4 Tim nhan vien theo ma nhan vien A2252163: \n";
    string nvct("A2252163");
    int i = TimNhanVienTheoMaNv(dsNhanVien,soLuongNhanVien, nvct);
    cout << dsNhanVien[i].getMaNhanVien() << "\t" << dsNhanVien[i].getHoTen() << "\t" << dsNhanVien[i].getLuongCoBan() << "\t" << dsNhanVien[i].getSoSanPham() << "\t\t" << dsNhanVien[i].getLuongHangThang() << endl;

    cout << "\nCau 5 Cap nhan luong co ban nhan vien theo ma nhan vien A2235433: \n";
    string nvct1("A2235433");
    int j = TimNhanVienTheoMaNv(dsNhanVien,soLuongNhanVien, nvct1);
    int sal;
    cin >> sal;
    dsNhanVien[j].CapNhatLuong(sal);
    cout << dsNhanVien[j].getMaNhanVien() << "\t" << dsNhanVien[j].getHoTen() << "\t" << dsNhanVien[j].getLuongCoBan() << "\t" << dsNhanVien[j].getSoSanPham() << "\t\t" << dsNhanVien[j].getLuongHangThang() << endl;

    cout << "\nCau 6 Tim nhan vien co luong cao nhat: \n";
    int tmp = TimNhanVienLuongMax(dsNhanVien,soLuongNhanVien);
    cout << dsNhanVien[tmp].getMaNhanVien() << "\t" << dsNhanVien[tmp].getHoTen() << "\t" << dsNhanVien[tmp].getLuongCoBan() << "\t" << dsNhanVien[tmp].getSoSanPham() << "\t\t" << dsNhanVien[tmp].getLuongHangThang() << endl;


    cout <<"\nCau 7 Tim nhan vien co so so san pham ban duoc thap nhat: \n";
    int temp = TimNhanVienSpMin(dsNhanVien, soLuongNhanVien);
    cout << dsNhanVien[tmp].getMaNhanVien() << "\t" << dsNhanVien[tmp].getHoTen() << "\t" << dsNhanVien[tmp].getLuongCoBan() << "\t" << dsNhanVien[tmp].getSoSanPham() << "\t\t" << dsNhanVien[tmp].getLuongHangThang() << endl;

    cout <<"\nCau 8 Tim 10 nhan vien co luong cao nhat: \n";
    TimNhanVienTop10(dsNhanVien, soLuongNhanVien);
    
    return 0;
}
