// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, x, b, y;
//         cin >> a >> x >> b >> y;

//         // if (a == b)
//         // {
//         //     if (y < x)
//         //     {
//         //         cout << "Bob\n";
//         //     }
//         //     else
//         //     {
//         //         cout << "Alice\n";
//         //     }
//         // }
//         // else if (a < b)
//         // {
//         //     if (b - a == a && y - x == x)
//         //     {
//         //         cout << "Equal\n";
//         //     }
//         // }
//         // else if (a > b)
//         // {
//         //     if (x == y)
//         //     {
//         //         cout << "Alice";
//         //     }
//         //     else
//         //     {
//         //         cout << "Bob\n";
//         //     }
//         // }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        float a,x,b,y;
        cin>>a>>x>>b>>y;
        if(a/x == b/y)cout<<"Equal\n";
        else if(a/x>b/y)cout<<"Alice\n";
        else cout <<"Bob\n";
    }
}
