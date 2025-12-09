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
        int x, y, h;
        cin >> x >> y >> h;
        int cnt, ans = 0;
        if (x == h)
            cout << 1 << '\n';
        else
        {
            cnt = x - h;
            ans = cnt / y;
            if (cnt % y != 0)
            {
                ans += 2;
                cout << ans << "\n";
            }
            else
            {
                ans += 1;
                cout << ans << '\n';
            }

            // if(x%y==0)
            // cout<<cnt<<'\n';
        }
    }

    return 0;
}