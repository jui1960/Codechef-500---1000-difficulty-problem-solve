#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(y==0)cout<<"YES\n";
	    else{
	        
	       
	            if(y%x==0){
	                if(n*x<y)cout<<"NO\n";
	                else
	                
	                cout<<"YES\n";
	            }
	            else cout<<"NO\n";
	        
	    }
	}

}
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, x, y;
//         cin >> n >> x >> y;
//         if (y % x == 0) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }