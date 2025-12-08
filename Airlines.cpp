#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,n,ans=0;
	    cin>>x>>n;
	    if(n%100==0) ans=n/100;
	    else ans =(n/100)+1;
	    if(ans>x) cout<<ans-x<<'\n';
	    else cout<<0<<'\n';
	}

}
// #include <iostream>
// #include <cmath> // Required for ceil function

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x, n;
//         cin >> x >> n;

//         // Calculate the minimum number of planes needed
//         int needed_planes = ceil((double)n / 100);

//         // Output the number of planes to purchase, ensuring it's not negative
//         cout << max(0, needed_planes - x) << endl;
//     }
//     return 0;
// }