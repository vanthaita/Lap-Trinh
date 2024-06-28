#include <iostream>
using namespace std;

void inputArray(int *&a, int &n)
{
    cin>>n;
    a = new int[n];
    for(int i = 0; i < n;i++)
        cin>>a[i];
}
void merge(int a[], int low, int mid, int high)
{
    int k = low;
    int index1 = mid - low + 1;
    int index2 = high - mid;
    int *p = new int[index1];
    int *q = new int[index2];
    
    
    for(int i =0 ; i < index1; i++)
    {
        *(p + i) = a[i + low];
    }
    for(int j =0 ; j < index2; j++)
    {
        *(q + j) = a[mid + j + 1];
    }
    
    int i = 0;
    int j = 0;
    while(i < index1 && j < index2)
    {
        a[k++] = (p[i] <= q[j]) ? p[i++] : q[j++];
    }
    
    while(i < index1)
    {
        a[k++] = p[i++];
    }
    
    while(j < index2)
    {
        a[k++] = q[j++];
    }
    delete[] p;
    delete[] q;
}
void mergesort(int a[], int low, int high)
{
    if(low < high)
    {
        int mid = low + (high - low) / 2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void outputArray(int a[], int n)
{
    for(int i = 0; i <n ;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n, *a;
    inputArray(a,n);
    mergesort(a,0,n - 1);
    outputArray(a,n);
}