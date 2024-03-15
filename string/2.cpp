#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "akash";
    string s2 = "dpdat";

    vector<int>v1(128, -1);
    vector<int>v2(128, -1);

    if(s1.size()!=s2.size()){
        cout<<"not isomorphic"<<endl;
    
    }
    
    for(int i = 0; i < s1.size(); i++){
        if(v1[s1[i]]!=v2[s2[i]]){
            cout<<"not isomorphic"<<endl;
        }
        else{
            v1[s1[i]] = v2[s2[i]] = i;
        }
    }
    cout<<"isomorphic"<<endl;
    return 0;
}