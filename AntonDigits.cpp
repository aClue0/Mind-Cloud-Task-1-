#include <iostream>
#include <vector>
using namespace std;
// 256 32
int main()
{
    int result = 0, twos = 0, threes = 0, fives = 0, sixes = 0;
    bool isFinished = true;
    cin >> twos;
    cin >> threes;
    cin >> fives;
    cin >> sixes;
    while (isFinished)
    {
        if (twos > 0 && fives > 0 && sixes > 0)
        {
            result += 256;
            twos--;
            fives--;
            sixes--;
        }
        else if (twos > 0 && threes > 0)
        {
            result += 32;
            twos--;
            threes--;
        }
        else
        {
            isFinished = false;
        }
    }
    cout << result;
    return 0;
}