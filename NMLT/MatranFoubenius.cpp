#include <iostream>
#define MAX 300
using namespace std;
void inputarray(double a[][MAX], int &n, int  &m)
{
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        for(int j =0; j <m; j++)
        {
            cin>>a[i][j];
        }
}
bool matrandv(double a[][MAX], int  n, int m)
{
    for (int i = 0; i < n ;i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][i] != 1)
                return false;
            if(a[i][j] != 0 && i != j)
                return false;
        }
    }
    return true;
}
bool Frobenius(double a[][MAX], int n, int m)
{
    if(n != m)
        return false;
    for (int i = 0;i < n ;i++){
        int flag = 0;
        for (int j = 0; j < m; j++)
        {
            if(a[i][i] != 1)
                return false;
            if(i < j && a[i][j] != 0)
                return false;
            if(i != j)
            {
                if(a[i][j] != 0 )
                    flag++;
            }
        }
        if(flag > 1)
            return false;
    }
    
    //if(matrandv(a,n,m) == true)
        //return false;
    return true;
}



int main()
{
    int n,  m;
    double a[MAX][MAX];
    inputarray(a,n,m);
    if(Frobenius(a,n,m) == true)
        {
            cout<<"Yes";
        }
    else
    {
        cout<<"No";
    }
    return 0;
}