#include <iostream>
#include <string>
using namespace std;
struct OneDay
{
	int DD;
	int MM;
	int YYYY;
};
struct Student
{	
	string Name;
	float Math;
	float Literature;
};
void inputDay(OneDay &day, int &LastDay)
{
    cout <<"Hay nhap ngay hien tai: ";
	cin >> day.DD >> day.MM >> day.YYYY;
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
				cout << "Illegal\n";
				inputDay(day,LastDay);
			}
			break;
	}
}
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
void input(Student &st)
{
    cin.ignore();
    cout << "Nhap ten hoc sinh: ";
	getline(cin, st.Name);
	cout << "Nhap diem toan va van: ";
	cin >> st.Math >> st.Literature;
}
float averageScore(Student &st)
{
	float AverScore = (st.Math + st.Literature) / 2;
	return AverScore;
}
int main()
{
	do{
		cout << "\n\nMENU \n";
		cout << "1. Nhap vao mot ngay tim ngay ke tiep va xuat ra ket qua\n";
		cout << "2. Nhap ho ten, diem toan, diem van cua mot hoc sinh, tinh diem va xuat ra ket qua\n";
		cout <<	"3. Thoat menu\n";
		int t;
		cin >> t;
		cout << endl;
		switch(t)
		{
			case 1:
				OneDay od1, od2;
				int LastDay;
				inputDay(od1,LastDay);
				TheNextDay(od1,od2,LastDay);
				cout << "Ngay ke tiep: " << od2.DD <<"-"<< od2.MM <<"-"<< od2.YYYY;
				break;
			case 2:
				Student st;
				input(st);
				cout <<"Diem trung binh: "<< averageScore(st);
				break;
		}
		if(t == 3)
			break;
	}while(1);
	return 0;
}