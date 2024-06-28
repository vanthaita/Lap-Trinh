/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


#include <iostream>
using namespace std;
void inputarray(int a[], int &n)
{
	cin>>n;
	for(int i = 0; i <n ;i++)
		cin>>a[i];
}
void outputarray(int a[], int &n)
{
	cin>>n;
	for(int i = 0; i <n ;i++)
		cout<<a[i]<<" ";
}
int findMin(int a[], int n)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min)
			min = a[i];
	}
	return min;
}
void countMin(int a[], int n, int minValue)
{
	int tmp;
	for(int i = 0 ; i < n; i++)
	{
		if(minValue == a[i])
		{
			cout<<minValue <<" xuat hien lan dau tien tai vi tri " << i << " trong mang\n";
			break;
		}		

	}

	for(int i = 0 ; i < n; i++)
	{
		if(minValue == a[i])
		{
			tmp = i;
		}		

	}	
	cout<< minValue <<" xuat hien lan cuoi cung tai vi tri " << tmp << " trong mang\n";


}



int main()
{
    int n, a[10000];
    cin>>n;
    inputArray(a,n);
    cout<<"Mang vua nhap:"<<endl;
    outputArray(a,n);
    cout<<endl;
    int minValue=findMin(a,n);
    countMin(a,n,minValue);

    return 0;
}
