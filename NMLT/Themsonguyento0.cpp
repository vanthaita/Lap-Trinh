#include <iostream>
#include <math.h>
using namespace std;

void inputArray(int a[], int &n)
{
    cin>>n;
    for(int i = 0; i <n ;i++)
        cin>>a[i];
}
void outputArray(int a[], int n)
{
    for(int i = 0; i <n ;i++)
        cout<<a[i]<<" ";
}
bool checksnt(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
void Prime(int a[], int &n, int &nb, int b[])
{
    nb = 0;
    for(int i = 0; i < n; i++)
    {
        int pos = 0;
        if(checksnt(a[i]) == true)
        {
            int pos = i + 1;
            b[nb] = pos;
            nb++;
            n++;
            for(int i = n - 1 ;i >= abs(pos); i--)
                a[i] = a[i - 1];
            a[pos] = 0;
        }
    }

}


int main()
{
    int n, nb;
    int a[100], b[100];
    inputArray(a,n);
    Prime(a,n,nb,b);
    outputArray(a,n);
    cout<<endl;
    outputArray(b,nb);
    return 0;
}