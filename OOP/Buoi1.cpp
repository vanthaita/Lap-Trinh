/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n % 10;
    int b = (n / 10) % 10;
    int c = n / 100;
    if(n < 100 || n > 999)
    {
        cout << "Khong nhap nhu yeu cau.";
    }
    else
    {
        switch(c)
        {
            case 1: cout <<"Mot tram"; break;
            case 2: cout <<"Hai tram"; break;
            case 3: cout <<"Ba tram"; break;
            case 4: cout <<"Bon tram"; break;
            case 5: cout <<"Nam tram"; break;
            case 6: cout <<"Sau tram"; break;
            case 7: cout <<"Bay tram"; break;
            case 8: cout <<"Tam tram"; break;
            case 9: cout <<"Chin tram"; break;
        }
        if(b % 10 == 0 && a != 0)
        {
            cout << " le";
        }
        if(b == 0 && a == 0)
        {
            cout <<"";
        }
        else
        {
            cout <<" ";
        }
        switch(b)
        {
            case 1: cout <<"muoi`"; break;
            case 2: cout <<"hai muoi"; break;
            case 3: cout <<"ba muoi"; break;
            case 4: cout <<"bon muoi"; break;
            case 5: cout <<"nam muoi"; break;
            case 6: cout <<"sau muoi"; break;
            case 7: cout <<"bay muoi"; break;
            case 8: cout <<"tam muoi"; break;
            case 9: cout <<"chin muoi"; break;
        }
        if(b != 0 && a != 0)
        {
            cout << " ";
        }
        switch(a)
        {
            case 1: 
                if(b != 1 && b != 0)
                {
                    cout <<"mot'"; 
                }
                else
                {
                    cout << "mot";
                }
                break;
            case 2: cout <<"hai"; break;
            case 3: cout <<"ba"; break;
            case 4: cout <<"bon"; break;
            case 5: 
                if(b != 0){
                        cout <<"lam";
                }
                else
                {
                    cout << "nam";
                }
                break;
            case 6: cout <<"sau"; break;
            case 7: cout <<"bay"; break;
            case 8: cout <<"tam"; break;
            case 9: cout <<"chin"; break;
        }
        cout << ".";
    }
    return 0;
}