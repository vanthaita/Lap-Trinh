
#include <iostream>
using namespace std;


void inputMatrix(int a[][100], int &n  )
{
    cin>>n;
    for(int i = 0 ; i < n ;i++)
        for(int j = 0 ; j < n; j++)
            cin>>a[i][j];
}

void outputMatrix(int a[][100], int n)
{
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < n; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n\n";
    }
}
int maxrow(int a[][100],int j, int n)
{
    int max = a[0][j];
    for(int i = 0 ; i < n; i++)
        if(a[i][j] > max)
            max = a[i][j];
    return max;
}
void rowWithMaximumSum(int a[][100], int n)
{
    for(int j = 0 ;  j <n; j++)
    {
        cout<<"Gia tri lon nhat tren cot" << j <<" la:" << maxrow(a,j,n) << "\n";
    }
}



int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    rowWithMaximumSum(a,n);
    return 0;
}