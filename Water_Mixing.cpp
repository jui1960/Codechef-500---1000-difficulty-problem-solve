// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,b,c,d;
// 	    cin>>a>>b>>c>>d;
// 	    if(a==b)cout<<"YES\n";
// 	    else if(a>b){
// 	        if(a-d<=b)cout<<"YES\n";
// 	        else cout<<"NO\n";
// 	    }
// 	    else{
// 	        if(a+c>=b)cout<<"YES\n";
// 	        else cout<<"NO\n";
// 	    }
// 	}

// }



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==b) cout<<"YES\n";
	    else{
	        int ans = abs(a-b);
	       if(a<b){
	           if(ans<=c) cout<<"YES\n";
	           else cout<<"NO\n";
	           
	       }
	       else{
	           if(ans>d) cout<<"NO\n";
	           else cout<<"YES\n";
	           
	       }
	    }
	}

}
