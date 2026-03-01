// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y;
// 	    cin>>x>>y;
// 	    int ans =(500- (x*2)+(1000-(x+y)*4));
// 	    int ans2=(1000-(y*4)+(500-(x+y)*2));
// 	    cout<<max(ans,ans2)<<'\n';
// 	}

// }

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int X, Y;
        cin >> X >> Y;

        // Case 1: A -> B
        int total1 = (500 - 2*X) + (1000 - 4*(X + Y));

        // Case 2: B -> A
        int total2 = (1000 - 4*Y) + (500 - 2*(X + Y));

        cout << max(total1, total2) << endl;
    }

    return 0;
}