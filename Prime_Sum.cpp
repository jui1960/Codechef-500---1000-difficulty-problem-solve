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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] + v[j] == 2)
                {
                    cnt++;
                }
                else if ((v[i] + v[j]) % 2 != 0)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}