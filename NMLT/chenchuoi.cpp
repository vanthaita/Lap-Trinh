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

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	cin.getline(s, 299);
	cin.getline(s1, 299);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
	ChenChuoiTaiVitriK(s,s1,k);
	    cout<<s;
	}
	return 0;
}
int myStrlen(char s[], int k)
{
	int cnt = 0;
	while(s[k] != '\0')
	{
		cnt++;
		k++;
	}
	return cnt;
}
void ChenChuoiTaiVitriK(char s[],char s1[], int k)\
{
	int n = myStrlen(s,0);
	for(int j = 0; j < myStrlen(s1,0);j++){
    		for(int i = n - 1 ; i >= k; i--)
    		{	 
    			s[i+1] = s[i];
    		}
    		s[k] = s1[j];
    		k++;
    		n++;
	}
		s[n] = '\0';
}