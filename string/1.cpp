#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "akash";
    vector<int>freq(26,0);

    for(int i = 0; i< str.size();i++){
        int index = str[i] - 'a';
        freq[index]++;
    }

    for(int i = 0; i< 26; i++){
        if(freq[i]!=0){
        cout<<char('a'+i) << "->"<<freq[i]<<endl;
        }
    }
    return 0;
    //today commit
}