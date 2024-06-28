
#include <iostream>

using namespace std;
int b[] = {0,0,0,0,0,0,0,0,0,0};
int main()
{
	int a[3][5] = {	25,5,23,24,52,
					78,47,45,31,34,
					94,56,58,76,54};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			while(a[i][j] != 0){
				int tmp = a[i][j] % 10;
				b[tmp] = b[tmp] + 1; 
				a[i][j] /= 10;
			}

		}
	}
	int max = b[0];
	int temp;
	for (int i = 0; i < 11; ++i)
	{
		if(b[i] > max){
			max = b[i];
			temp = i;
		}
	}

	cout << temp <<" ";




	return 0;
}








