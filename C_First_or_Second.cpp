// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--){
     
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
    
//         long long X = 0;
//         deque<long long> dq(a.begin(), a.end());
    
//         while (dq.size() > 1) {
//             long long pick_first = dq.front();
//             long long pick_second = dq[1];
    
//             if (pick_first >= pick_second) {
//                 X += pick_first;
//                 dq.pop_front();
//             } else {
//                 X -= pick_second;
//                 dq.erase(dq.begin() + 1);
//             }
//         }
    
//         cout << X << "\n";
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/**
 * কেন এই লজিক কাজ করে?
 * সান্তা চাইলে যেকোনো শিশুকে ১ নম্বর বা ২ নম্বর পজিশন থেকে সরাতে পারে।
 * ১. প্রথম শিশু a[0] সবসময় যোগ হবে কারণ তাকে সরানোর পর অন্য কেউ লাইনের শুরুতে আসবে।
 * ২. i > 0 এর জন্য, যদি a[i] পজিটিভ হয় তবে তাকে ১ নম্বর পজিশনে এনে যোগ করা যায়।
 * ৩. i > 0 এর জন্য, যদি a[i] নেগেটিভ হয় তবে তাকে ২ নম্বর পজিশনে এনে বিয়োগ করা যায় (যা যোগের কাজ করে)।
 */

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    long long max_X = a[0]; // প্রথম শিশু সবসময় যোগ হবে
    for (int i = 1; i < n; i++) {
        max_X += abs(a[i]); // বাকি সবার পরম মান যোগ হবে
    }

    cout << max_X << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}