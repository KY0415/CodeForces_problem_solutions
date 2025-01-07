#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream p(s);

    string word;

    p >> word;
    reverse(word.begin(), word.end());
    cout << word;

    while (p >> word)
    {
        reverse(word.begin(), word.end());

        cout << " " << word;
    }

    return 0;
}