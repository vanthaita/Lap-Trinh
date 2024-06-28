#include <iostream>
#include <time.h>
using namespace std;
/*int liearSearch(int a[], int n, int x)
{
	int k = 0;
	a[n] = x;
	while(a[k] != x)
	{
		k++;
	}
	if(k < n)
	{
		return k;
	}
	return -1;

}
/*int binarySearch(int a[], int n, int x)
{
	int m = 
	int low = 0;
	int high = n - 1;
	int mid = low + (high - low) / 2;
	if(x == a[mid])
		return mid;
	else if(x > a[mid])
	{
		while(low < mid)
		{
			if(x == a[low])
			{
				return low;
			}
			low++;
		}
	}
	else if(x < a[mid])
		{
			while(high > mid)
			{
				if(x == a[high])
				{
					return high;
				}
				high--; 
			}
		}
}*/
/*int Liearsearch(int a[], int n, int x)
{
	int k = 0;
	a[n] = x;
	while(a[k] != x)
	{
		k++;
	}
	if(k < n)
	{
		return k;
	}
	return -1;
}
int main()
{
	int n = 10;
	int a[10];
	srand(time(NULL));
	for(int i = 0; i < n ;i++)
	{
		a[i] = rand() % 1000 + 1;
	}

	int x = rand() % 1000 + 1;
	cout <<"\t"<< x << "\n";
	for(int i = 0; i < n ;i++)
	{
		cout << a[i] <<" ";
	}
	cout << "\n";
	cout << Liearsearch(a,n,x);
	return 0;
}

void Learsearch(int a[][3], int n , int x)
{
	bool found = false;
	int row;
	int col;
	for(int i = 0; i < n;i++)
	{
		for(int j = 0;  j < n;j++)
		{
			if(a[i][j] == x)
			{
				found = true;
				row = i;
				col = j;
				cout << "a[" << row << "]"<<"[" << col <<"] == " << x;
				break;
			}
		}
		if(found)
		{
			break;
		}
	}  
}
int main()
{
	int n = 3;
	int a[3][3];
	srand(time(NULL));
	for(int i  = 0 ; i <n;i++)
	{
		for(int j = 0; j < n;j++)
			a[i][j] = rand() % 10 + 1;
	}
	int x = rand() % 10 + 1;



	for(int i  = 0 ; i <n;i++)
	{
		for(int j = 0; j < n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << x << "\n";
	Learsearch(a,n,x);



	return 0;
}
*/
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
/*void buddlesort(int a[], int n)
{
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < n - 1 -i;j++)
		{
			if(a[j] > a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int a[100];
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	buddlesort(a,n);
	for(int i = 0; i <n;i++)
	{
		cout << a[i] <<" ";
	}
	return 0;
}
*/
/*
void quicksort1(int a[], int n, int first, int last)
{
	if(first >= last)
		return;
	int x = a[(first + last) / 2];
	int L = first;
	int J = last;
	do
	{
		while(a[L] < x)
		{
			L++;
		}
		while(a[J] > x)
		{
			J++;
		}
		if(L <= J)
		{
			swap(a[L], a[J]);
			L++;
			J++;
		}
	}while(L <= J);
	quicksort1(a,n,first,J);
	quicksort1(a,n,L,last);
	return;
}
void quicksort(int a[], int n)
{
	quicksort1(a,n,0,n-1);
}
void quicksort(int a[], int n, int left, int right)
{
	int x = a[(left + right) / 2];
	int l = left;
	int r = right;
	do
	{
		while(a[l] < x){
			l++;
		}
		while(a[r] > x){
			r--;
		}
		if(l <= r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}while(l <= r);
	if(left < r)
		quicksort(a,n,left,r);
	if(l < right)
		quicksort(a,n,l,right);


}*/
int* merge(int *a, int n1, int *b, int n2)
{
	int *c = new int[n1 + n2];

	int i = 0;
	int j = 0;
	int cnt = 0;
	while(i < n1 && j < n2)
	{
		if(a[i] < b[j])
		{
			c[cnt++] = a[i++];
		}
		else
		{
			c[cnt++] = b[j++];
		}
	}
	for(int k = i ; k < n1; k++)
	{
		c[cnt++] = a[k];
	}
	for(int k = j ; k < n2 ; k++)
	{
		c[cnt++] = b[k];
	}
	return c;
}
int* mergesort(int a[], int n)
{
	if(n == 1)
		return a;
	int mid = n / 2;
	int *p = new int[mid];
	int *q = new int[n - mid];

	for(int i = 0; i < mid ;i++)
	{
		p[i] = a[i];
	}
	for(int j = 0;	j < n - mid;j++)
	{
		q[j] = a[mid + j];
	}
	p = mergesort(p,mid);
	q = mergesort(q, n - mid);

	return merge(p,mid ,q, n - mid);
}
int main()
{
	int n;
	cin >> n;
	int a[100];
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	int *b  = mergesort(a,n);
	for(int i = 0; i <n;i++)
	{
		cout << *(b + i) <<" ";
	}
}


