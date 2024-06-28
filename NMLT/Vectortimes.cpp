#include <iostream>
using namespace std;
void inputarray(double a[][300], int &n, int &m)
{
    cin>>n>>m;
    for(int i = 0; i < n; i++)
            for(int  j = 0; j < m; j++)
                cin>>a[i][j];
}
void inputvector(double b[], int &k)
{
    cin>>k;
    for(int i = 0; i < k; i++)
        cin>>b[i];
}
void outputvector(double a[], int n)
{
    for(int i = 0; i < n ; i++)
        cout<<a[i]<<endl;
}
void matrixvector(double a[][300], double b[], double c[],int n, int m , int k)
{
    for(int i = 0; i < n; i++)
    {
        c[i] = 0;
        for(int j = 0; j < m; j++)
        {
            c[i] += (a[i][j] * b[j]);
        }
    }    
}
int main()
{
    int n,m,k;
    double a[50][300];
    double b[50];
    double c[50];
    inputarray(a,n,m);
    inputvector(b,k);
    matrixvector(a,b,c,n,m,k);
    outputvector(c,n);
}