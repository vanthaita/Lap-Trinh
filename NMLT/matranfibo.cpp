int fibo(int i, int j)
{
    int x = i + j + 1;
    int fibo,f1,f2;
    fibo = f1 = f2 = 1;
    for(int i = 3; i <= x; i++){
        fibo = f1+f2;
        f1 = f2;
        f2 = fibo;
     }
    return fibo;
}
void Nhapmang(int a[][MAX], int &n)
{
    cin>>n;
    for(int i = 0; i <n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = fibo(i,j);
        }
    }
}
void Xuatmang(int a[][MAX], int n)
{
    for(int i = 0; i <n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
    cout<<endl<<endl;
    }
}