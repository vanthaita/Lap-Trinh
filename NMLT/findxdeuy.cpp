void inputArray(int *&a, int &n)
{
    cin>>n;
    a = new int[n];
    for(int i = 0; i < n;i++)
        cin>>a[i];
}
int binarySearch(int a[], int l, int r,int x, int n)
{
    if(l > r)
        return -1;
    int mid = (l + r) / 2;
    if(a[mid] == x && a[mid + 1] == x)
    {
        int temp;
        for(int i = 0; i < n;i++)
        {
            if(a[i] == x){
                temp = i;
            }
        }
        return temp;
    }
    else if (a[mid] == x)
        return mid;
    if(a[mid] > x)
        return binarySearch(a,l,mid - 1,x,n);
    return binarySearch(a,mid + 1,r,x,n);
    
}
int binarySearch2(int a[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    return binarySearch(a,l,r,x,n);
}