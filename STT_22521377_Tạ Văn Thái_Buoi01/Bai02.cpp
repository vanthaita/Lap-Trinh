#include <iostream>
#include <string>
#include <time.h>
using namespace std;

struct Student
{
	int masv;
	string hoten;
	float dtb;
	string hocluc;
};
struct LopHoc
{
	Student sv[200];
	int sosv;

	float diemtbMax;
	float diemtbMin;
};

void nhapSV(Student &sv)
{
	cin >> sv.masv;
	cin.ignore();
	getline(cin, sv.hoten);
	cin >> sv.dtb;
}
void xuatSinhVien(Student sv)
{
	cout << "\n\n\tMa sinh vien: "<< sv.masv << "\tHo Ten: " << sv.hoten << "\tDiem Trung Binh: " << sv.dtb <<"\tHoc Luc: "<<sv.hocluc; 
}
void xuatnhieuSinhVien(LopHoc lp)
{
	for(int i = 0; i < lp.sosv ; i++)
	{
		xuatSinhVien(lp.sv[i]);
	}
}

void KhoiTao(LopHoc &lp)
{
	Student sv0 = {225205515,"Nguyen Van A",8};
	Student sv1 = {225216377,"Nguyen Van B",6};
	Student sv2 = {225201365,"Nguyen Van C",9};
	Student sv3 = {225207615,"Nguyen Van D",2.4};
	Student sv4 = {225204263,"Nguyen Van E",5};


	Student sv5 = {225206435,"Nguyen Van F",4};
	Student sv6 = {225264324,"Nguyen Van Q",3.4};
	Student sv7 = {225225635,"Nguyen Van T",6};
	Student sv8 = {225275463,"Nguyen Van Y",10};
	Student sv9 = {225285466,"Nguyen Van B",2};


	Student sv10 = {225234144,"Nguyen Van U",4.5};
	Student sv11 = {225223141,"Nguyen Van I",6.7};
	Student sv12 = {225234214,"Nguyen Van O",5.3};
	Student sv13 = {225267454,"Nguyen Van L",7.6};
	Student sv14 = {225215453,"Nguyen Van P",4};


	lp.sv[0] = sv0;
	lp.sv[1] = sv1;
	lp.sv[2] = sv2;
	lp.sv[3] = sv3;
	lp.sv[4] = sv4;

	lp.sv[5] = sv5;
	lp.sv[6] = sv6;
	lp.sv[7] = sv7;
	lp.sv[8] = sv8;
	lp.sv[9] = sv9;

	lp.sv[10] = sv10;
	lp.sv[11] = sv11;
	lp.sv[12] = sv12;
	lp.sv[13] = sv13;
	lp.sv[14] = sv14;

	lp.sosv = 14;
}

void taongaunhienSinhVien(LopHoc &lp)
{
	string ho[] = {"Nguyen ", "Ta ", "Tran ", "Le ","Ho ","Mac "};
	string tendem[] = {"Van ", "Anh " ,"Phuong ","Minh ","Hai "};
	string ten[] = {"Ly","Chinh","Thai","Huy","Khang","Long","Hieu"};
	srand(time(NULL));
	for(int i = 0; i < lp.sosv;i++)
	{
		lp.sv[i].hoten = ho[rand() % 6] + tendem[rand() % 6] + ten[rand() % 7];
		lp.sv[i].masv = 22500000 + rand() % 111111;
		lp.sv[i].dtb = rand() % 10;
	}
}
/*
	Input:
		-Một mảng sv[] chứa thông tin sinh viên.
		-Số nguyên n là số lượng sinh viên cần sinh ngẫu nhiên.
	Output:
		-Sinh ngẫu nhiên n sinh viên với các thông tin bao gồm họ tên, mã sinh viên và điểm trung bình, lưu vào mảng sv[].
*/
int diemtrungbinhlonnhat(LopHoc lp)
{
	int max = lp.sv[0].dtb;
	int tmp;
	for (int i = 1; i < lp.sosv; i++)
	{
		if(lp.sv[i].dtb > max)
		{
			max = lp.sv[i].dtb;
			tmp = i;
		}
	}
	return tmp;

}
/*
	INPUT :
		- Một đối tượng LopHoc có chứa thông thi về danh sách sinh viên và  
		trung bình của mỗi sinh viên.
	OUTPUT:
		- Hàm trả về chỉ số vi tri theo danh sach sinh viên có điểm trung bình lớn nhất trong LopHoc
*/
void timDTB(LopHoc lp, float num)
{
	int tmp = -1;
	for(int i = 0;i < lp.sosv;i++)
	{
		if(lp.sv[i].dtb == num)
		{
			xuatSinhVien(lp.sv[i]);
		}
	}
}
/*
	Input:
		-Số điểm trung bình cần tìm kiếm (num) được nhập từ bàn phím.
		-Danh sách sinh viên trong lớp học (lp) đã được khai báo và nhập trước đó.
	Output:
		-Danh sách các sinh viên có điểm trung bình bằng num.
*/
void swap(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Top10MinMaxDtb(LopHoc &lp)
{
    for(int i = 0 ; i < lp.sosv;i++)
	{
		for(int j = 0; j < lp.sosv - i - 1; j++)
		{
			if(lp.sv[j].dtb > lp.sv[j+1].dtb)
				swap(lp.sv[j],lp.sv[j+1]);
		}
	}
	cout << "\n\nTop 10 sv co diem thap nhat: \n";
	for (int i = 0; i < 10; ++i)
	{
		xuatSinhVien(lp.sv[i]);
	}
	int i = 0;
	int j = lp.sosv;
	cout << "\n\nTop 10 sv co diem cao nhat: \n";
	while(j-- && i <= 10){
		xuatSinhVien(lp.sv[j]);
		i++;
	}

}
/*
	Input:
		-Không có input, vì hàm không yêu cầu input từ người dùng.
	Output:
		-Danh sách sinh viên có điểm trung bình thấp nhất trong lớp học.
		-Danh sách sinh viên có điểm trung bình cao nhất trong lớp học.
*/
void HocLuc(LopHoc &lp)
{
	for(int i = 0; i < lp.sosv;i++)
	{
		if (lp.sv[i].dtb >= 9.0 && lp.sv[i].dtb <= 10)
		{
			lp.sv[i].hocluc = "Xuat Sac";	
		}
		else if(lp.sv[i].dtb < 9.0 && lp.sv[i].dtb >= 8.0)
		{
			lp.sv[i].hocluc = "Gioi";
		}
		else if(lp.sv[i].dtb < 8.0 && lp.sv[i].dtb >= 7.0)
		{
			lp.sv[i].hocluc = "Kha";
		}
		else if(lp.sv[i].dtb < 7.0 && lp.sv[i].dtb >= 5.0)
		{
			lp.sv[i].hocluc = "Trung Binh";
		}
		else if(lp.sv[i].dtb < 5.0 && lp.sv[i].dtb >= 3.5)
		{
			lp.sv[i].hocluc = "Yeu";
		}
		else
		{
			lp.sv[i].hocluc = "Kem";
		}
	}
}
/*
	Input:
		-Lớp học (LopHoc lp) chứa thông tin về danh sách sinh viên (Student sv[]) bao gồm họ tên, mã sinh viên, điểm trung bình và học lực của từng sinh viên.
		-Số lượng sinh viên (int n) được tạo ngẫu nhiên.
	Output:
		-Hiển thị danh sách sinh viên (ho, tên đệm, tên, mã sinh viên, điểm trung bình, học lực) của lớp học lp.
*/


void timSinhVien(LopHoc lp, int num)
{
    int tmp = -1;
	for(int i = 0;i < lp.sosv;i++)
	{
		if(lp.sv[i].masv == num)
		{
			xuatSinhVien(lp.sv[i]);
			tmp = 1;
			break;
		}
	}
	if(tmp == -1){
	    cout <<"\nKhong tim thay\n";
	}
	    
}
/*
	Input:
		-Số nguyên num là mã số sinh viên cần tìm trong lớp học.
	Output:
		-Số nguyên tmp là chỉ số của sinh viên có mã số num trong danh sách sinh viên của lớp học lp.
		-Nếu không tìm thấy sinh viên có mã số num trong danh sách sinh viên của lớp học lp, hàm trả về giá trị -1.
*/
int main()
{
	LopHoc lp;
	cout << "\nCau 2 khoi tao danh sach sinh vien: \n";
	KhoiTao(lp);
	cout <<"\n\nCau 3 khoi tao ngau nhien cac SV:\n";
	LopHoc lp1;
	lp1.sosv = 4;
    taongaunhienSinhVien(lp1);
    HocLuc(lp1);
	xuatnhieuSinhVien(lp1);
	cout <<"\n\n Cau 5 Xuat ra thong tin sinh vien co diem trung binh lon nhat:\n";
    xuatSinhVien(lp.sv[diemtrungbinhlonnhat(lp)]);
    cout <<"\n\nCau 6 Cap nhap hoc luc sinh vien: \n";
    HocLuc(lp);
	xuatnhieuSinhVien(lp);
	cout <<"\n\nCau 7 Tim sinh vien theo ma sinh vien: \n";
	int num = 225205515;
	timSinhVien(lp,num);
	cout <<"\n\n Cau 8 Tim sinh vien co diem trung binh cho truoc: \n";
	float num1 = 7.6;
	timDTB(lp, num1);
	cout <<"\n\n Cau 9 va cau 10 tra ve top 10 sinh vien co dtb lon nhat va thap nhat: \n";
	Top10MinMaxDtb(lp);
	return 0;
}



