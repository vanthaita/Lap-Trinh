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
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, 254);
	cin.getline(s2, 254);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
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
int myStrcmp(char s1[MAX], char s2[MAX])
{
    int dodai = myStrlen(s1,0) < myStrlen(s2,0) ? myStrlen(s1,0) : myStrlen(s2,0);
    
    
    for(int i = 0; i < dodai; i++)
    {
        if(s1[i] > s2[i])
            return 1;
        else if(s1[i] < s2[i])
            return -1;
    }
    
    if(myStrlen(s1,0) > myStrlen(s2,0))
        return 1;
    else if(myStrlen(s1,0) < myStrlen(s2,0))
        return -1;
    return 0;
}