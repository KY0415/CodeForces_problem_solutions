#include <iostream>
using namespace std;
int main()
{
    int cube;
    cin >> cube;
    int s = 0;
    int i = 1, cnt = 0;
    int next = 0;

    while (cube >= next)
    {
        s = s + i;
        cube = cube - s;

        cnt++;
        i++;
        next = s + i;
    }
    cout << cnt;

    return 0;
}