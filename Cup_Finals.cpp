// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y,z;
// 	    cin>>x>>y>>z;
// 	    int ans =abs(x-y);
// 	    if(ans<=z)cout<<"YES\n";
// 	    else cout<<"NO\n";
// 	}

// }


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int X, Y, D;
        cin >> X >> Y >> D;

        if(abs(X - Y) <= D) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}