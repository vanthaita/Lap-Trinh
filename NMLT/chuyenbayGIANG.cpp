#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int x= 20;
  int &y = x;
  y = x + y;
  cout<<x<<" " <<y;

    return 0;
}