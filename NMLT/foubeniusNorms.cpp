#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void inputarray(long double a[][300], int &n, int &m)
{
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j =0; j <m; j++)
        {
            cin>>a[i][j];
        }
    }
}
long double frobeniusNorm(long double a[][300], int n, int m)
{
    long double sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += pow(a[i][j], 2);
        }
    }
    long double res = sqrt(sum);
    return res;
}
int main()
{
    int n, m;
    long double a[50][300];
    inputarray(a,n,m);
    long double tmp = frobeniusNorm(a,n,m);
    cout<<scientific<<tmp;
    return 0;
}