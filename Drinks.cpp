#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int drinks = 0;
    vector<int> percentages;
    double result = 0;
    cin >> drinks;
    for (int i = 0; i < drinks; i++)
    {
        int thisPercentage;
        cin >> thisPercentage;
        percentages.push_back(thisPercentage);
    }

    for (int i = 0; i < drinks; i++)
    {
        result += percentages[i];
    }
    result = result / drinks;
    cout << result;
    return 0;
}