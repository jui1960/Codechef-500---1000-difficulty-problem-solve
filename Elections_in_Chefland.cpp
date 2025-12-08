#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        std::vector<int> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= x)
                cnt++;
        }
        cout << cnt << '\n';
    }
}