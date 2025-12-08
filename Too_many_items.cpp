#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int rs = n / 10;
        if (n % 10 != 0)
        {
            rs++;
        }

        cout << rs << '\n';
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    cout<<((n%10!=0)?(n/10)+1:(n/10))<< '\n';
// 	}

// }
