#include <iostream>
#include <string>
#include <cctype>   //For "tolower()" function
using namespace std;
int main()
{
    string s, s1;
    cin >> s >> s1;

    for(int i = 0; i < s1.length(); i++)
    {
        s[i] = tolower(s[i]);
        s1[i] = tolower(s1[i]);
    }

    if(s > s1)
    {
        cout << "1";
    }
    else if(s == s1)
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}