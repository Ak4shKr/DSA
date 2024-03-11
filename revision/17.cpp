// #include<bits/stdc++.h>
// using namespace std;\

// void reverse(string &res){
//     int low = 0;
//     int high = res.length()-1;
//     while(low<=high){
//         swap(res[low], res[high]);
//         low++;
//         high--;
//     }
// }
// int main()
// {
//     int n = 2;
//     string res = "";
//     while(n!=0){
//         if(n%2 == 1) res+="1";
//         else res+="0";
//         n = n/2;
//     }
//     reverse(res);
//     cout<<res;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string bin = "1001";
    int n = bin.length();
    int p2 = 1;
    int num = 0;

    for(int i = n - 1; i >= 0; i--){
        if(bin[i]==1){
        num = num + p2*bin[i];
        }
        
        p2 = p2*2;
    }

    cout<<num;
    return 0;
}