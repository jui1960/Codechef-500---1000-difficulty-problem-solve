#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int cnt = count_if(v.begin(), v.end(), [](int x)
                           { return x >= 10 && x <= 60; });
        cout << cnt << '\n';
    }
}
