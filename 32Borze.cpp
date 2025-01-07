#include <iostream>
#include <string>
using namespace std;
int main()
{
    int cnt1 = 0;
    string str;
    getline(cin, str);
    int size = str.length();

    for(int i = 0; i < size; i++)
    {
        if(str[i] == '.')
        {
            cout<< "0";
        }
        else if(str[i] == '-' && str[i+1] == '.')
        {
            cout << "1";
            i++;
        }
        else if(str[i] == '-' && str[i+1]== '-')
        {
            cout << "2";
            i++;
        }
    }

    return 0;
}