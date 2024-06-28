#include <iostream>

using namespace std;

void inputArray(int a[], int n)
{
    for(int i = 0; i <n ;i++)
        cin>>a[i];
}
void outputArray(int a[], int n)
{
    for(int i = 0; i <n ;i++)
        cout<<a[i]<<" ";
}
bool solapphuong(int n)
{
    for(int i = 0; i < n;i++)
    {
        if(i * i * i  == n)
            return true;
    }
    return false;
}
bool isTotalCube(int a[], int n)
{
    for(int i = 0; i < n;i++)
    {
        if(solapphuong(a[i]) == false)
            return false;
    }
    return true;
}
int maxCube(int a[], int n)
{
    int max = a[0];
    for(int i = 0 ; i < n;i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}


int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;

    if (isTotalCube(a,n)==1)
    {
        cout <<"Mang toan so lap phuong"<<endl;
        cout << "So lap phuong lon nhat: "<<maxCube(a,n);
    }
    else cout<<"Mang khong phai chua toan cac so lap phuong";
    return 0;
}
