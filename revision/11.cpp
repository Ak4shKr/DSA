#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 2, 1, 5, 3, 6, 2, 1};

    cout << "frequency of items:" << endl;
    map<int, int> map;

    for (auto value : arr)
    {
        map[value]++;
    }

    for (auto element : map)
    {
        cout << "Item: " << element.first << ", Frequency: " << element.second << endl;
    }

    return 0;
}
