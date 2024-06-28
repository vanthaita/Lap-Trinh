#include <iostream>
#include <math.h>
#define MAXR 300
#define MAXC 300
void NhapMaTran(int a[][MAXR], int &n)
{
    std::cin>>n;
    for(int i = 0 ; i  < n ; i++)
        for(int j = 0 ; j < n ; j++)
            std::cin>>a[i][j];
}
long long TinhDinhThuc(int a[][MAXC], int n)
{
    long long det = 0;
    int b[MAXR][MAXC];
    if (n == 1)
        return a[0][0];
    else {
        for (int x = 0; x < n; x++) {
            int bi = 0;
            for (int i = 1; i < n; i++) {
                int bj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    b[bi][bj] = a[i][j];
                    bj++;
                }
                bi++;
            }
            det += pow(-1, x) * a[0][x] * TinhDinhThuc(b, n - 1);
        }
        return det;
    }
    
}