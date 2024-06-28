#include <iostream>
#include <sstream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> v;
    int cnt;
    while(ss >> word){
        v.push_back(word);
        cnt++;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}