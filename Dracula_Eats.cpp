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
        if (n < 2)
            cout << 0 << '\n';
        else
        {
            int ans = (n - 2) / 7;
            cout << ans + 1 << '\n';
        }
    }

    return 0;
}