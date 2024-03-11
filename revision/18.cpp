#include <iostream>
#include <string>
using namespace std;

int main()
{
    string bin = "11111"; // or int bin = 1001; if you want to use integer

    int n = bin.length();
    int p2 = 1;
    int num = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (bin[i] == '1') { // compare with character '1'
            num = num + p2; // add the product of p2 and the binary digit
        }

        p2 = p2 * 2;
    }

    cout << num;
    return 0;
}
