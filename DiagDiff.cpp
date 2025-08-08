#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, firstDiag = 0, secondDiag = 0;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        firstDiag += arr[i][i];
        secondDiag += arr[n - 1 - i][i];
    }
    int result = firstDiag - secondDiag;
    if (result < 0)
    {
        result = -result;
    }
    cout << result;
}
