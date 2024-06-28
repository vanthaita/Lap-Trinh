#include <iostream>
#include <cstring>
using namespace std;
#define MAX 255
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	StringReverse(s);
	cout << s << endl;
	return 0;
}
void StringReverse(char st[])
{
    int  cnt = 0;
    int n = strlen(st);   
    for(int i = 0; i < n; i++)
        {
            if(st[i] == ' ')
                cnt++;
        }
        
    if(cnt == 0)
    {
        int i = 0;
        int j = n - 1;
            while(i < j)
                {
                    char tmp = st[i];
                    st[i] = st[j];
                    st[j] = tmp;
                    i++;
                    j--;
                }
    }
    else{
        int temp = 0;
        for(int k = 0; k < n; k++)
            {
                if(st[k] == ' ' && st[k+1] != ' ')
                {
                    int i = temp;
                    int j = k - 1;
                    while(i < j)
                    {
                        char tmp = st[i];
                        st[i] = st[j];
                        st[j] = tmp;
                        i++;
                        j--;
                    }
                        temp = k + 1;
                }
            }
        for(int o = n - 1; o >= 0; o--)
        {
            if(st[o] == ' ' && st[o - 1] != ' ')
            {
                int i = o + 1;
                int j = n - 1; 
                while(i < j)
                    {
                        char tmp = st[i];
                        st[i] = st[j];
                        st[j] = tmp;
                        i++;
                        j--;
                    }
                break;
            }
                
        }
    }
}