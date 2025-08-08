#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int s, t, a, b, m, n;
    int countOranges = 0, countApples = 0;
    vector<int> appleDistance, orangeDistance;
    cin >> s >> t >> a >> b >> m >> n;

    for (int i = 0; i < m; i++)
    {
        int thisDistance;
        cin >> thisDistance;
        appleDistance.push_back(thisDistance);
    }

    for (int i = 0; i < n; i++)
    {
        int thisDistance;
        cin >> thisDistance;
        orangeDistance.push_back(thisDistance);
    }

    for (int i = 0; i < m; i++)
    {
        int thisDistance = a + appleDistance[i];
        if (thisDistance >= s && thisDistance <= t)
        {
            countApples++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int thisDistance = b + orangeDistance[i];
        if (thisDistance >= s && thisDistance <= t)
        {
            countOranges++;
        }
    }
    cout << countApples << endl;
    cout << countOranges << endl;
    return 0;
}