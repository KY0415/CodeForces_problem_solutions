#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;

    cin >> a;

    int b = a;

    if (a - b == 0)
    {
        cout << "int " << b << endl;
    }
    else
    {
        cout << "float " << b << " " << fixed << setprecision(3) << a - b << endl;
    }

    return 0;
}