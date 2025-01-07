#include <iostream>
using namespace std;
int main()
{
    int n, a, b, diff;
    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        
        if(a == b)
        {
            cout << "0" << endl;
        }

        else if(a > b)
        {
            diff = a - b;

            if(diff % 10 == 0)
            {
                cout << diff / 10 << endl;
            }
            else 
            {
                cout << (diff / 10) + 1 << endl;
            }
            
        }
        else 
        {
            diff = b - a;

            if(diff % 10 == 0)
            {
                cout << diff / 10 << endl;
            }
            else 
            {
                cout << (diff / 10) + 1 << endl;
            }
        }
    }

    return 0;
}