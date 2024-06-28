/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	cin.getline(s, 299);	//Nhap chuoi s
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}
void xoa(char s[], int x){
    int n = strlen(s);
    for(int i = x; i < n; i++)
        {
            s[i] = s[i+1];
        }
        s[n-1] = '\0';
}
void xoakt(char s[])
{
    for(int i = 0; i < strlen(s); i++)
        if(s[i] == ' ' && s[i+1] == ' '){
            xoa(s,i);
            i--;
        }
    if(s[0] == ' ')
        xoa(s,0);
    if(strlen(s) - 1 == ' ')
        xoa(s,strlen(s) - 1);
}
void Chuanhoa(char s[])
{
    xoakt(s);
    for(int i = 0; i < strlen(s);i++)
        s[i] = tolower(s[i]);
    s[0] = toupper(s[0]);
    for(int i = 0; i < strlen(s);i++)
        if(s[i] == ' ' && s[i+1] != ' ')
            s[i+1] = toupper(s[i+1]);
}