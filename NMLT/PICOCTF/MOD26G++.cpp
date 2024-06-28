#include <iostream>
#include <string>
#include <cctype>
using namespace std;
	
string transformString(string s)
{
	string transformString;
	for(int i = 0; i < s.length(); i++)
	{
		if(isalpha(s[i]))
		{
			if(tolower(s[i]) - 'a' < 14)
				transformString.append(1, s[i] + 13);
			else
				transformString.append(1, s[i] - 13);
		}
		else
			transformString.append(1, s[i]);
	}
	return transformString;
}
int main()
{
	string s;
	getline(cin, s);
	
	cout<<transformString(s);

	return 0;
}