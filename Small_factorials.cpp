#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--){
    int n;
    cin >> n;            // n = 100 দিলে 100! বের হবে
    
    vector<int> result;
    result.push_back(1); // initial value = 1

    for(int x = 2; x <= n; x++) {
        int carry = 0;
        for(int i = 0; i < result.size(); i++) {
            int value = result[i] * x + carry;
            result[i] = value % 10;
            carry = value / 10;
        }

        while(carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    // print in reverse
    for(int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << "\n";
    }

    return 0;
}
