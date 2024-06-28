#include <iostream>
#include <string>
using namespace std;
struct OneDay
{
	int DD;
	int MM;
	int YYYY;
};
void inputDay(OneDay day, int &LastDay)
{
    //cout <<"Hay nhap ngay hien tai: ";
	//cin >> day.DD >> day.MM >> day.YYYY;
	switch(day.MM)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			LastDay = 31;
			break;
		case 4: case 6: case 9: case 11:
			LastDay = 30;
			break;
		case 2:
			(day.YYYY % 400 == 0 || (day.YYYY % 4 == 0 && day.YYYY % 100 != 0)) ? LastDay = 29 : LastDay = 28;
			break;
		default :
			LastDay = 0;
			if(LastDay == 0 || day.YYYY < 1|| (LastDay != 0 && (day.DD > LastDay || day.DD < 1)))
			{
				cout << "Khong hop le\n";
				inputDay(day,LastDay);
			}
			break;
	}
}
/*
    INPUT:
        - Bien Day kieu OneDay chua thong tin mot ngay gom ngay thang nam, bien lastday luu so ngay cuoi cung cua thang dc nhap .
    OUTPUT:
        - Neu thang hop le gan gia tri bien lastday tuong ung boi so ngay cuoi cung cua thang do.
        - Neu thang khong hop le thi thong bao Khong hop le ra man hinh va nhap lai.
*/
void TheNextDay(OneDay od1, OneDay &od2, int LastDay)
{
	if(od1.DD < LastDay)
	{
		od2.DD = od1.DD + 1;
		od2.MM = od1.MM;
		od2.YYYY = od1.YYYY;
	}
	else
	{
		if(od1.MM != 12)
		{
			od2.DD = 1;
			od2.MM = od1.MM + 1;
			od2.YYYY = od1.YYYY;
		}
		else
		{
			od2.DD = 1;
			od2.MM = 1;
			od2.YYYY = od1.YYYY + 1;
		}
	}
}
/*
    INPUT:
        - od1: một đối tượng của cấu trúc OneDay, đại diện cho một ngày.
        - LastDay: một số nguyên đại diện cho ngày cuối cùng của tháng của ngày được đại diện bởi od1
    OUTPUT:
        - od2: một đối tượng của cấu trúc OneDay, đại diện cho ngày đến sau od1.
*/
int main()
{
	cout <<"Cau 1 Tim ngay ke tiep va xuat ra man hinh:\n";
	OneDay od1, od2;
	int LastDay;
	od1.DD = 28;
	od1.MM = 3;
	od1.YYYY = 2022;
	cout <<"Ngay hien tai la: "<< od1.DD <<"-"<< od1.MM <<"-"<<od1.YYYY<<"\n";
	inputDay(od1,LastDay);
	TheNextDay(od1,od2,LastDay);
	cout << "Ngay ke tiep: " << od2.DD <<"-"<< od2.MM <<"-"<< od2.YYYY;
	return 0;
}


