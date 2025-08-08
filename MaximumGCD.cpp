#include <iostream>
using namespace std;

int main()
{
    int f;
    cin >> f;

    while (f)
    {
        int n;
        cin >> n;
        cout << n / 2 << endl;
        f--;
    }

    return 0;
}
