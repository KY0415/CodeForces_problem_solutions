#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int size = s.length();
    char temp = 'a';
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (abs(temp - s[i]) <= 13)
        {
            sum = sum + abs(temp - s[i]);
            temp = s[i];
        }
        else
        {
            sum = sum + 26 - abs(temp - s[i]);
            temp = s[i];
        }
    }
    cout << sum << endl;

    return 0;
}