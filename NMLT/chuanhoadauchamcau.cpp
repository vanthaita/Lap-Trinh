/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
include
class
string
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
void xoa(char s[], int x){
    int n = strlen(s);
    for(int i = x + 1; i < n;i++)
        s[i-1] = s[i];
    s[n-1] = '\0';
}
void them(char s[], int vt)
{
    int n = strlen(s);
    for(int  i = n - 1;i >= vt;i--)
        s[i+1] = s[i];
    s[vt] = ' ';
    s[n + 1] = '\0';
}
void Chuanhoa(char s1[])
{
    for(int i = 0; i < strlen(s1);i++){
            if(s1[i] == '.' && s1[i+1] != ' '){
                them(s1,i+1);
                i--;
            }
            else if(s1[i] == ' ' && s1[i+1] == ' ')
            {
                xoa(s1,i);
                i--;
            }
             if(s1[i+1] == '.' && s1[i] == ' ')
            {
                xoa(s1,i);
                i--;
            }
            if(s1[i] == '.' && s1[i+1] == ' ' && s1[i+2] == ' '){
                xoa(s1,i+1);
                i--;
            }
    }
}

int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	strcpy(s1, s);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

