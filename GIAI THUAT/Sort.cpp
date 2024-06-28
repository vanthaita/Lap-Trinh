#include <iostream>
#include <time.h>
#include<cstring>
using namespace std;
void swap(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
/*
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
		for(int j = 0; j < n - i - 1; j++)
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
0 1 2 4 5 6 7 8 9
/*
	Thuật toán insection sort sắp xếp dựa trên tư tường là khong gian cần sắp xếp
	đã được sắp sếp một phân và ta chỉ cần thêm một giá trị mơis vào không gian mới được
	sắp xếp.
*/
/*
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
int findnum(int a[], int n)
{
	int cnt = 0;
	for(int i = 0 ; i <n ;i++)
	{
		for(int j = i + 1 ; j < n ;j++)
		{
			if(a[i] == a[j])
				cnt++;
		}
	}
	return 0;
}
int* merge(int *p,int *q, int left, int right)
{
	int *c = new int[left + right];
	int i = 0;
	int j = 0;
	int cnt = 0;

	while(i < left && j < right)
	{
		if(p[i] < q[j])
			c[cnt++] = p[i++];
		else
			c[cnt++] = q[j++];
	}

	for(int k = i ; k < left;k++)
		c[cnt++] = p[k];

	for(int k = j ; k < right;k++)
		c[cnt++] = q[k];
	return c;

}
int* mergesort(int a[], int n)
{
    if(n == 1)
        return a;
	int mid = n / 2;
	int *p = new int[mid];
	int *q = new int[n - mid];


	for (int i = 0; i < mid; ++i)
	{
		p[i] = a[i];
	}
	for (int i = 0; i < n - mid; ++i)
	{
		q[i] = a[mid + i];
	}

	p = mergesort(p,mid);
	q = mergesort(q,n-mid);

	return merge(p,q,mid, n - mid);


}



void selectionsort2(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if(a[min] > a[j])
				min = j;
		}
		if(min != i)
		{
			swap(a[i], a[min]);
		}
	}
}
void straightselection(int a[], int n)
{
	for(int  i=  0; i < n;i++)
	{
		for (int j = 0;j < n - 1 - i; j++) 
		{
			if(a[j] > a[j + 1])
				swap(a[j+1],a[j]);
		}
	}
}
void quicksort(int a[], int n, int left, int right)
{
	int num = a[(right + left ) / 2];
	int l = left;
	int r = right;

	do
	{
		while(a[l] < num)
			l++;
		while(a[r] > num)
			r--;
		if(l <= r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}

	}while(l <= r);

	if(left < r)
		quicksort(a,n,left,r);
	if(l < right)
	{
		quicksort(a,n,l,right);
	}

}
/*			QuickSort
	-Giống như Merge sort, thuật toán sắp xếp quick sort là một thuật toán chia để trị( Divide and Conquer algorithm). 
	Nó chọn một phần tử trong mảng làm điểm đánh dấu(pivot). Thuật toán sẽ thực hiện chia mảng thành các mảng con dựa vào pivot đã chọn.
	Việc lựa chọn pivot ảnh hưởng rất nhiều tới tốc độ sắp xếp. Nhưng máy tính lại không thể biết khi nào thì nên chọn theo cách nào.
	Dưới đây là một số cách để chọn pivot thường được sử dụng:
	1. Luôn chọn phần tử đầu tiên của mảng.
	2. Luôn chọn phần tử cuối cùng của mảng. (Được sử dụng trong bài viết này)
	3. Chọn một phần tử random.
	4 .Chọn một phần tử có giá trị nằm giữa mảng(median element).

	3 5 33 1 8 12 4 23 8 pivot = 8

	3 5 8 1 4 12lr 8 23 33

	1 3 4 5 8 8 12 23 33    

*/

/*

void insectingsort2(int a[], int n)
{
	for(int i = 1; i< n;i++)
	{
		int k = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > k)
		{
			a[j+ 1] = a[j];
			j--;
		}
		a[j + 1] = k;

	}
}
void merge(int arr[], int l, int m, int r) 
{ 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    // Create temp arrays  
    int L[n1], R[n2]; 
  
    // Copy data to temp arrays L[] and R[]  
    for(int i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for(int j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    // Merge the temp arrays back into arr[l..r] 
      
    // Initial index of first subarray 
    int i = 0;  
      
    // Initial index of second subarray 
    int j = 0;  
      
    // Initial index of merged subarray 
    int k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])  
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // L[], if there are any  
    while (i < n1)  
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is  
// right index of the sub-array 
// of arr to be sorted 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
          
        // Same as (l+r)/2, but avoids  
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
}
/*
					Merge Sort
	-	

*/

/*
void buddlesort1(int a[],int n)
{
	for(int i = 0; i < n;i++)
	{
		for (int j = 0; i < n - i - 1; j++)
		{
			if(a[j] > a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}

void quicksort(int a[], int n, int left, int right)
{
	int x = a[(left + right) / 2];
	int l = left;
	int r = right;
	do
	{
		while(a[l] < x)
		{
			l++;
		}

		while(a[r] > x)
		{
			r--;
		}

		if(l <= r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}while(l <= r);
	if(l < right)
	{

		x = a[(l + right) / 2];
		do
		{
			while(a[l] < x)
			{
				l++;
			}

			while(a[right] > x)
			{
				right--;
			}

			if(l <= r)
			{
				swap(a[l],a[right]);
				l++;
				right--;
			}
	}while(l <= right);

	if(r > left)
	{

		x = a[(left + r) / 2];
		do
		{
			while(a[left] < x)
			{
				left++;
			}

			while(a[r] > x)
			{
				r--;
			}

			if(left <= r)
			{
				swap(a[left],a[r]);
				left++;
				r--;
			}
		}while(left <= r);
	}



}

struct HoiDongThi
{
	int sophong;
	char nha;
	int sothisinh;
};

void nhapsoPhong(HoiDongThi a[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i].sophong = rand() % 200 + 1;
	}
}
void nhapNha(HoiDongThi a[], int n)
{
	char char_set[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i].nha = char_set[rand() % 52];
	}
}
void nhapSoThiSinh(HoiDongThi a[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i].sothisinh = rand() % 250 + 10;
	}
}
void giamdanSothising(HoiDongThi a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - i - 1;j++)
		{
			if(a[j].sothisinh > a[j+1].sothisinh)
				swap(a[j], a[j+1]);
		}
	}
}
void giamdanSonha(HoiDongThi a[], int n)
{
	for(int i = 1; i < n;i++)
	{
		if(a[i].nha != a[i+1].nha){
			int x = a[i].nha;
			int j = i - 1;
			while(j >= 0 && a[j].nha < x)
			{
				a[j+1].nha = a[j].nha;
				j--;
			}
			a[j+1].nha = x;
		}
		else if(a[i].nha == a[i+1].nha)
		{	
			if(a[i].sothisinh < a[i+1].sothisinh)
				swap(a[i], a[i+1]);
		}
	}
}
void giamdanSophong(HoiDongThi a[], int n)
{
	for(int i = 0; i <n;i++)
	{
			int min = i;
			for (int j = 0; j < n; j++)
			{
				if(a[j].sophong < a[min].sophong)
					min = j;
			}
			if(i != min)
			{
				swap(a[i],a[min]);
			}
	}
}


int main()
{
	int n = 10;
	HoiDongThi a[10];
	nhapsoPhong(a,n);
	nhapSoThiSinh(a,n);
	nhapNha(a,n);
	giamdanSonha(a,n);
	cout << a[0].sophong << " " << a[0].nha;
	cout << endl;
	cout << a[1].sophong << " " << a[1].nha;
	cout << endl;
	for(int i = 0; i < n;i++)
	{
		cout << i << ":";
		cout << a[i].nha <<","<< a[i].sophong <<","<< a[i].sothisinh << endl ;
	}

}



class NhanVien
{
private:
	string name;
	int age;
	string address;
	double salary;
	int hour;
public:
	void inputinfo()
	{
		getline(cin , name);
		cin >> age;
		cin.ignore();
		getline(cin, address);
		cin >> salary;
		cin >> hour;
	}

	void printf()
	{
		cout << name << "\t" << age <<"\t" << address << "\t" << hour << "\n";
	}
	double Salary()
	{
		if(hour >= 200)
		{
			return salary * (1 + 0.2);
		}
		else if(hour < 200 && hour >= 100)
		{
			return salary * (1 + 0.1);
		}
		else
		{
			return salary;
		}
	}
};	

int main()
{
	
	NhanVien a;
	a.inputinfo();
	a.printf();

	cout << a.Salary();



}

class BankAccount
{
private:
	string accountNumber;
	string accountName;
	double balance = 0;
public:
	void BankAcount(string UserName, string UserNum)
	{
		accountNumber = UserNum;
		accountName = UserName;
	}
	void getAccountNumber()
	{
		cout << accountNumber <<"\n";
	}
	void getAccountName()
	{
		cout << accountName << "\n";
	}
	double getBalance()
	{
		cout << balance << endl;
	}
	double deposit(double sent)
	{
		balance = sent;
	}
	double withdraw(double out)
	{
		int flag;
		if(out <= balance)
		{
			flag = true;
			balance = balance - out;
			return flag;
		}
		else
		{
			flag = false;
			cout << "False";
		}
	}

};
class Bank
{
private:
	BankAccount *ArryList = new BankAcount[];
public:
	void search(string UserNum)
	{
		int k = 0;
		ArryList[8].accountNumber = UserNum;
		while(a[k].accountNumber != UserNum)
		{
			k++;
		}
		if(k < 7)
		{
			return k;
		}
		cout << "-1";
	}
};
int main()
{
		
}
*/