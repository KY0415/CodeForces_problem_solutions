#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        char password[size];
        for(int i = 0; i < size; i++)
        {
            cin >> password[i];
        }
    }
    return 0;
}