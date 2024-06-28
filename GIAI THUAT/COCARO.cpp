#include <iostream>
using namespace std;
char banco[3][3] = {'1','2','3','4','5','6','7','8','9'};
char nguoichoi = 'X';
void xuatBanCo(char banco[3][3])
{
	for(int i = 0; i < 3;i++)
	{
		for(int j = 0; j < 3;j++)
		{
			cout << banco[i][j] << " ";
		}
		cout << endl;
	}
}
void nhapBuocDi()
{
	int n;
	cout << "Vui long nhap so tuong ung: \n\n";
	cin >> n;
	switch(n)
	{
		case 1:
			banco[0][0] = nguoichoi;
			break;
		case 2:
			banco[0][1] = nguoichoi;
			break; 
		case 3:
			banco[0][2] = nguoichoi;
			break;
		case 4:
			banco[1][0] = nguoichoi;
			break; 
		case 5:
			banco[1][1] = nguoichoi;
			break;
		case 6:
			banco[1][2] = nguoichoi;
			break;
		case 7:
			banco[2][0] = nguoichoi;
			break;
		case 8:
			banco[2][1] = nguoichoi;
			break; 
		case 9:
			banco[2][2] = nguoichoi;
			break; 
	}

}
void luocChoi()
{
	if(nguoichoi == 'X')
		nguoichoi = 'O';
	else if(nguoichoi == 'O')
	{
		nguoichoi = 'X';
	}
}
char NguoiChienThang()
{
	if(banco[0][0] == 'X' && banco[0][1] == 'X' && banco[0][2] == 'X')
	{
    	return 'X';
	}
	if(banco[1][0] == 'X' && banco[1][1] == 'X' && banco[1][2] == 'X')
	{
		return 'X';
	}
	if(banco[2][0] == 'X' && banco[2][1] == 'X' && banco[2][2] == 'X')
	{
		return 'X';
	}
	if(banco[0][0] == 'X' && banco[1][1] == 'X' && banco[2][2] == 'X')
	{
		return 'X';
	}
	if(banco[0][2] == 'X' && banco[1][1] == 'X' && banco[2][0] == 'X')
	{
		return 'X';
	}
//O Chien Thang
	if(banco[0][0] == 'O' && banco[0][1] == 'O' && banco[0][2] == 'O')
	{
		return 'O';
	}
	if(banco[1][0] == 'O' && banco[1][1] == 'O' && banco[1][2] == 'O')
	{
		return 'O';
	}
	if(banco[2][0] == 'O' && banco[2][1] == 'O' && banco[2][2] == 'O')
	{
		return 'O';
	}
	if(banco[0][0] == 'O' && banco[1][1] == 'O' && banco[2][2] == 'O')
	{
		return 'O';
	}
	if(banco[0][2] == 'O' && banco[1][1] == 'O' && banco[2][0] == 'O')
	{
		return 'O';
	}
	return 'H';
	
}
int main()
{
    int cnt = 0;
	while(1)
	{
	    xuatBanCo(banco);
		nhapBuocDi();
        if(NguoiChienThang() == 'X')
		{
		    cout << "X chien thang \n";
		    xuatBanCo(banco);
		    break;
		}
		else if(NguoiChienThang() == 'O')
		{
		    cout << "O chien thang \n";
		    xuatBanCo(banco);
		    break;
		}
		luocChoi();
		cnt++;
		if(cnt == 9)
		{
		    cout << "HOA\n";
		    cnt = 0;
		    break;
		}
	}


	return 0;
}