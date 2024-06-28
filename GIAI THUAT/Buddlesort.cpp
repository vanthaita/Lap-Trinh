#include <iostream>

using namespace std;
void swap(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void inputArray(int a[], int n)
{
	for(int i = 0 ; i < n; i++)
	{
		cin >> a[i];
	}
}
void outputArray(int a[], int n)
{
	for(int i = 0 ; i < n; i++)
	{
		cout << a[i] <<" ";
	}

}
void buddlesort(int a[], int n)
{
	for(int i = 0 ; i < n;i++)
	{
		for(int j = 0; j < n - i -1; j++)
		{
			if(a[j] > a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
void insectingsort(int a[], int n)
{
	for(int i = 1; i < n - 1; i++)
	{
		int ai = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > ai)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = ai;
	}
}
void selectionsort(int a[], int n)
{
	for(int i = 0 ; i < n;i++)
	{
		int min = i;
		for(int j = i + 1; j < n;j++)
		{
			if(a[j] < a[min])
				min = j;
		}
		if(min != i)
		{
			swap(a[i], a[min]);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int a[100];
	inputArray(a,n);
	//buddlesort(a,n);
	//insectingsort(a,n);
	selectionsort(a,n);
	outputArray(a,n);
}