/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

void ThayTheKyTuChuCai(char s[], char x)
{
    for(int i = 0 ; i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            s[i] = x;

    }
}
int DemSoKyTuDacBiet(char s[])
{
    int cnt = 0;
    for (int i  = 0 ; i  < strlen(s) ; i++){
        if(s[i] >= 'a' && s[i]<= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
            cnt+=0;
        else 
            cnt++;
    }
    return cnt;
}
bool chucai(char s)
{
    if ((s >= 97 && s <= 122) || (s >= 65 && s <= 90))
        return 0;
    return 1;
}
bool chuso(char s)
{
    if((s >='0') && (s <='9'))
        return false;
    return true;
}
void transformString(char s1[], char s2[])
{
    for (int i = 0; i < strlen(s1);i++)
        {
            if (i % 2 == 0 && s1[i] >= 'a' && s1[i] <= 'z'){
                    s2[i] = s1[i];
                    s2[i]-=32;
                }
            else if (i % 2 != 0 && s1[i] >= 'A' && s1[i] <= 'Z'){
                    s2[i] = s1[i];
                    s2[i] +=32;
                }
               
            else if (chuso(s1[i]) == 0 && chucai(s1[i]) == 1)
            {
                s2[i] = '*';
            }
            else if (chuso(s1[i]) == 1 && chucai(s1[i]) == 1 )
            {
                s2[i] = '*';
            }
            else
            {
                s2[i] = s1[i];
            }
                    
        }
        s2[strlen(s1)] = '\0';
}
int main()
{
    char s[256];
    cin.getline(s,256);
    char x;
    cin>>x;
    ThayTheKyTuChuCai(s,x); // Ham thay the cac ky tu chu cai co trong chuoi s thanh ky tu x
    cout<<s;
    return 0;
}
