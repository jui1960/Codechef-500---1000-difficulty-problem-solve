// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y,z;
// 	    cin>>x>>y>>z;
// 	    int ans = x/3;
// 	    if(x<=3)cout<<x*y<<'\n';
// 	    else{
// 	        if(x%3==0){
	           
// 	            cout<<(x*y)+(ans-1)*z<<endl;
// 	        }else{
	           
// 	            cout<<(x*y)+(ans*z)<<endl;
// 	        }
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
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=3) cout<<x*y<<'\n';
	    else{
	        int ans =x/3,rs=0,rs1=0;
	        int mod = x%3,an = 0;
	        if(x%3!=0){
	            rs = ans*(3*y);
	            rs1 = mod*y;
	            an = rs+(ans*z)+rs1;
	            cout<<an<<'\n';
	            
	        }
	        else{
	            int p = x*y;
	            int anns =p+(ans-1)*z;
	            cout<<anns<<'\n';
	        }
	    }
	}

}
 