

struct point
{
	int x;
	int y;
	int z;
};
struct POLYGON
{
	int num_point;
	point *p;
};


void nhaptoado(POLYGON a)
{
	cin >> a.num_point;

	a.p = new point[a.num_point]
	for()
		cin >> a.x
}


bool dx(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] != a[n - 1 - i])
				return false;
	}
	return true;
}



void tangdan(int a[], int n)
{
	for(int i = 0 ; i <n ;i++)
	{
		if(a[i] > a[i+1])
			a[i] = a[i + 1];
	}

}


