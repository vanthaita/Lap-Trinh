#include <iostream>
using namespace std;

const int MAX = 50;

void NhapMang(int a[], int &n)
{
    do {
        cin >> n;
    } while (n < 1 || n > MAX);
    
    for (int i = 0; i < n; i++) {
        
        cin >> a[i];
    }
}

bool KiemTraDoiXung(int a[], int n)
{
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int DemMangConTang(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n - 1 && a[j] < a[j + 1]) {
            j++;
        }
        cout<<"Gia TRI "<< j <<" ";
        int k = j - i + 1;
        dem += k * (k + 1) / 2;
        i = j;
    }
    return dem;
}

int main()
{
    int a[MAX], n = 0;
    NhapMang(a, n);
    
    if (KiemTraDoiXung(a, n)) {
        cout << "Mang doi xung" << endl;
    } else {
        cout << "Mang khong doi xung" << endl;
    }
    
    cout << "So mang con tang: " << DemMangConTang(a, n) << endl;
    
    return 0;
}
