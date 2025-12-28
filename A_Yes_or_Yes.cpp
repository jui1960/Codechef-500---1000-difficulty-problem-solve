// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//      int n;
//      cin>>n;
//      string s;
//      cin>>s;
//      int cnt = count(s.begin(),s.end(),'Y');
//      if(cnt<=1)cout<<"YES\n";
//      else cout<<"NO\n";
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
     
        string s;
        cin >> s;

        int cnt = count(s.begin(), s.end(), 'Y');

        if (cnt <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
