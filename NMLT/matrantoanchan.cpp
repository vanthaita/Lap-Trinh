#include <iostream>
#include <math.h>
using namespace std;

void inputMatrix(int a[][100], int &n)
{
	cin>>n;
	for(int i = 0 ; i < n ;i++)
		for(int j = 0 ; j < n; j++)
			cin>>a[i][j];
}

void outMatrix(int a[][100], int n)
{
	for(int i = 0 ; i < n ;i++){
		for(int j = 0 ; j < n; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n\n";
	}
}

void matranchan(int a[][100], int n)
{
	for(int i = 0 ;i < n;i++)
		for(int j = 0; j < n; j++)
				if(a[i][j] % 2 != 0)
					a[i][j] = 0;
}

int main()
{
	int n;
	int a[100][100];

	inputMatrix(a,n);
	cout<<"\n";
	cout<<"Matrix\n";
	matranchan(a,n);
	outMatrix(a,n);

}