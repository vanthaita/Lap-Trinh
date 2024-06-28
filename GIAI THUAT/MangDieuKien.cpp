#include <iostream>
#include <vector>
using namespace std;

void sort(int a[])
{
	int n = 7;
	for(int i = 0; i < n; i++)
		if(a[i] > a[i + 1])
			a[i] = a[i+1];
}



void find(int a ,int n)
{
	<vector<int , int ,int > v;
	for(int i = 2 ; i < n;)
	{
		if(a[i] == a[i - 1])
			continue;
		int j = 0; k = i - 1;
		while(j < k)
		{
			if(a[j] + a[k] == a[i])
		}
	}

}



void outputArray(int a[])
{
	int n = 7; 
	for(int i = 0 ; i < n;i++)
		cout << a[i] << " ";
}

int main()
{
	int arr[] = { 2, 5, 7, 9, 11, 13, 15 };
	sort(arr);
	outputArray(arr);

}