


#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int num = 25, i = 3;
     vector<int> ans;
    i = i - 1;
    int get = 0, set = 0, clear = 0;
    get = num & (1 << i);
    set = num | (1 << i);
    clear = num & ~(1 << i);

    cout<<num<<endl;
    cout<<get<<endl;
    cout<<set<<endl;
    cout<<clear<<endl;

    // ans.push_back(get);
    // ans.push_back(set);
    // ans.push_back(clear);
    return 0;
}