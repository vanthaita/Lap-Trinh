/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;
struct NGAY
{
    int date;
    int month;
    int year;
};
struct CB
{
    string MS;
    NGAY NB;
    double GIO;
    string ND;
};
void nhapDSChuyenBay(CB a[], int &n)
{
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n ;i++)
    {
        getline(cin, a[i].MS);
        cin>>a[i].NB.date>>a[i].NB.month>>a[i].NB.year;
        cin>>a[i].GIO;
        cin.ignore();
        getline(cin, a[i].ND);
    }
}

CB chuyenbaylaunhat(CB a[], int n)
{
    int max = a[0].GIO;
    int temp ;
    for(int i = 0 ; i < n;i++)
    {
        if(a[i].GIO > max)
        {
            max = a[i].GIO;
            temp = i;
        }
    }
    return temp;
}

void chuyenbayGiang(CB a[], int n, string s)
{
    int pós = a[chuyenbaylaunhat(a,n)].ND.find(' ');
    string str2 = a[chuyenbaylaunhat(a,n)].ND.substr(pós);
    if(str2 == s)
        cout<<"YES";
    else 
        cout<<"NO";

}







int main()
{
    CB a[100];
    int n;

    nhapDSChuyenBay(a,n); // Nhap danh sach cac chuyen bay

    return 0;
}
