/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <string>
using namespace std;

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
void sort(string a[], int n, int b[])
{
	for(int i = 0 ; i < n - 1;i++)
	{
		for(int j = i +  1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}	
	}
}
int binarySearch(string a[], int n, string x, int b[])
{	
	int mid, left = 0, right = n-1;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(x==a[mid])
            return b[mid];
        if(x<a[mid])
            right = mid-1;
        else
            left = mid +1;
    }
    return -1;
}
int main()
{
	int n;
	cin >> n;
	string *arr = new string[n];
	int *b = new int[n];
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		b[i] = i;
	}
	sort(arr,n,b);
	string x;
	cin >> x;
	cout << binarySearch(arr,n,x,b);
	return 0;
}