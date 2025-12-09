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
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        int ans = 0;

        // if (a <= b && a <= c)
        // {
        //     ans = sum - a;
        //     cout << ans << '\n';
        // }
        // else if (b <= c)
        // {
        //     ans = sum - b;
        //     cout << ans << '\n';
        // }
        // else
        // {
        //     ans = sum - c;
        //     cout << ans << '\n';
        // }


        
        int rs = sum-min({a,b,c});
        cout<<rs<<'\n';
    }

    return 0;
}