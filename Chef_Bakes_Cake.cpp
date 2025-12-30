#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y;
    cin >> n >> x >> y;
    int capacity = y / x;
    cout << (n + capacity - 1) / capacity;
    return 0;
}