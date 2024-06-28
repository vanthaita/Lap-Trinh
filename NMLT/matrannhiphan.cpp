
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;


void inputMatrix(int a[][100], int &n, int &m)
{
	cin>>n>>m;
	for(int i = 0 ; i < n ;i++)
		for(int j = 0 ; j < m; j++)
			cin>>a[i][j];
}

int findRow(int a[][100], int n, int m)
{
	int tmp;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0;  j < m; j++){
			if(a[i][j] == 1){
				tmp++;
			}
		}
		if(tmp == m)
		    return 1;
		else 
		    tmp = 0;
	}
    return -1;
}



int main()
{
	int a[100][100],n,m;
	inputMatrix(a, n,m);

	cout<<findRow(a,n,m);

	return 0;
}




void inputMatrix(int a[][100], int &n , int &m)
{
	cin>>n>>m;
	for(int i = 0 ; i < n ;i++)
		for(int j = 0 ; j < m; j++)
			cin>>a[i][j];
}

void outputMatrix(int a[][100], int n, int m)
{
	for(int i = 0 ; i < n ;i++){
		for(int j = 0 ; j < m; j++)
			cout<<a[i][j]<<" ";
		cout<<"\n\n";
	}
}