/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <string.h>
using namespace std;
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
void buddlesort(string a[], int n)
{
	for(int i = 0 ; i < n;i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(a[j] < a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
int binarySearch(string a[], int n, string x)
{	
	int l = 0;
	int r = n - 1;
	int m = l + (r - l) / 2;
	if(x == a[m])
	{
		return m;
	}
	else if(x < a[m])
	{
		while(l < m)
		{
			if(a[l] == x)
			{
				return l;
			}
			l++;
		}
	}
	else if(x > a[m])
	{
		while(r > m)
		{
			if (a[r] == x)
			{
				return r;
			}
			r++;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin >> n;
	string arr[100];
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, arr[i]);
	}
	buddlesort(arr,n);
	string x;
	getline(cin, x);
	//cout << binarySearch(arr,n,x);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}


