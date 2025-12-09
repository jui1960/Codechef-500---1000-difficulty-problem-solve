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
        vector<int> v(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int plas = 0, minas = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                plas++;
            }
            else
                minas++;
        }
        if (n % 2 != 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            ans = abs(plas - minas);
            cout << ans / 2 << '\n';
        }
    }

    return 0;
}