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

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

int myStrcmp(char s[], char s2[])
{
    if(s[0] == s2[0])
        return 0;
    return 1;
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
void DemKyTu(char s[])
{
	int n = myStrlen(s,0);
	for(int i = 0; i < n;i++){
		int tmp = 1;
		for(int j = i - 1; j >= 0; j--)
		{
		    if(s[i] == s[j])
		    {
		        tmp = 0;
		        break;
		    }
		}
		if(tmp == 1){
		    int cnt = 0;
    		for(int k = 0; k < n; k++)
    		{
    		    if(s[i] == s[k])
    		        cnt++;
    		}
    		cout<<s[i]<<": "<<cnt<<endl;
		}
	}
}