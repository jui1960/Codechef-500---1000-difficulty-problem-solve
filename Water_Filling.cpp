#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	   int cnt = (a == 1) + (b == 1) + (c == 1);

        if (cnt >= 2)
            cout << "Not now\n";
        else
            cout << "Water filling time\n";
	}

}
