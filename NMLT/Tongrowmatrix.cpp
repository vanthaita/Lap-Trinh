/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


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
int maxrow(int a[][100],int i, int n)
{
    int sum = 0;
    for(int j = 0 ; j < n; j++)
        sum += a[i][j];
    return sum;
}
int rowWithMaximumSum(int a[][100], int n)
{
    int tmp = 0;
    int max = maxrow(a,0,n);
    for(int i = 0; i < n ;i++)
        if(maxrow(a,i,n) > max){
            max = maxrow(a,i,n);
            tmp = i;
        }
    return tmp ;
}



int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    cout<<"Matrix: "<<endl;
    outputMatrix(a,n);

    //Tim dong co tong lon nhat trong ma tran
    cout << "Row " <<  rowWithMaximumSum(a,n) << " has max sum "<<endl;

    return 0;
}



