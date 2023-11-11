#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};
    int n = matrix.size();
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x.push_back(matrix[i][j]);
        }
    }
    sort(x.begin(), x.end());

    for (auto i : x)
    {
        cout << i << "  ";
    }

    return 0;
}
