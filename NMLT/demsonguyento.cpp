void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n)
{
    cin>>m>>n;
    for(int i = 0; i < m ;i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
}
bool checksnt(int n)
{
    if(n < 2)
        return false;
    else if ( n > 2)
    {
        if(n % 2 == 0)
            return false;
        for(int i = 3 ; i < (n - 1); i++)
        {
            if(n  % i == 0)
                return false;
        }
    }
    return true;
}
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b)
{
    int res = 0;
    for(int i = 0; i <m ;i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(checksnt(arr[i][j]) == true && arr[i][j] >= a && arr[i][j] <= b)
            {
                res++;
            }
        }
    }   
    return res;
}