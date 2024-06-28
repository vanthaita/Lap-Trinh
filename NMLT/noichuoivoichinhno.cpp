/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>
#include <string>
using namespace std;

bool isRepeat(string inputString)
{
    if( inputString.substr(0, inputString.length() / 2) + inputString.substr(0, inputString.length() / 2) == inputString)
        return true;
    return false;
}
int main ()
{
    string inputString;
    getline(cin,inputString);
    cout<< isRepeat(inputString) ;
    return 0;
}
