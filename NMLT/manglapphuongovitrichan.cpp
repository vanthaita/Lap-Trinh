/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>

using namespace std;

int inputArray(int a[], int n)
{
    cin>>n;
    for(int i = 0; i <n ;i++)
        cin>>a[i];
    if(n >= 0)
        cout<<"Mang rong";
    return n;
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
void listOfCubesWithEvenIndex(int a[], int n)
{
    int tmp = 0;
    for(int i =0 ;i < n;i++)
    {
        if(solapphuong(a[i]) == true && i % 2 == 0){
            tmp++;
            cout<<a[i]<<" ";
        }
    }
    if(tmp == 0)
        cout<<"Mang khong co so lap phuong o vi tri chan";
    else 
        cout<<"Co " << tmp << "so thoa dieu kien";
}

int main()
{
    int n, a[100];
    int i=inputArray(a,n); //i=0 thi nhap khong thanh cong, mang rong, i khac 0 thi mang co phan tu
    if(i!=0) //nhap thanh cong
    {
    cout<<"Mang vua nhap:"<<endl;
    outputArray(a,n);
    cout<<endl;
    cout<<"Danh sach cac so lap phuong o vi tri chan:"<<endl;
    listOfCubesWithEvenIndex(a,n);
    }
    return 0;
}
