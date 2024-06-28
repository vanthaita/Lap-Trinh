#include <iostream>

using namespace std;
void inputArray(int a[], int &n)
{
	cin>>n;
	for(int i = 0 ; i < n ;i++)
		cin>>a[i];
}


void outputArray(int a[], int n)
{
	for(int i = 0 ; i < n; i++)
		cout << a[i] << " " ;
}
int max(int a[], int n)
{
	int maxValue = -100000000;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > maxValue && a[i] < 0)
			maxValue = a[i];
	}
	return maxValue;
}

int soam(int a[], int n)
{
	int tmp = 0;
	for(int i = 0 ; i < n;i++)
	{
		if(a[i] > 0)
			tmp++;
	}
	if(tmp == n)
		return 0;
	return 1;
}


void xuatsoam(int a[], int n)
{
	if(soam(a,n) == 0)
	{
		cout<<"Mang khong co so am";
	}
	else{
		int temp = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i] < 0)
			{
				cout<<"So am dau tien " << i << endl;
				break;
			}
		}
		for(int i = 0; i < n; i++)
		{
			if(a[i] < 0)
			{
				temp = i;
			}
		}
		cout << "So am cuoi cung " << temp << endl;
		cout << "So am lon nhat " << max(a,n);
	}

}
int main()
{
	int n;
	int a[100];
	inputArray(a,n);
	outputArray(a,n);
	cout<<"\n";
	xuatsoam(a,n);
	return 0;
}