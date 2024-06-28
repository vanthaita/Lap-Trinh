/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>
#include <cctype>

using namespace std;

int SoSanhBangNhau(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
        return 0;
    for (int i = 0; i < len1; i++) {
        if (isalpha(str1[i]) != isalpha(str2[i]))
            return 0;
        if (isalpha(str1[i]) && tolower(str1[i]) != tolower(str2[i]))
            return 0;
    }
    return 1;
}
int main()
{
    char s[256], t[256];
    cin.getline(s,256);
    cin.getline(t,256);
    cout<<SoSanhBangNhau(s,t);

    return 0;
}



strlen(s1) != strlen(s2)


