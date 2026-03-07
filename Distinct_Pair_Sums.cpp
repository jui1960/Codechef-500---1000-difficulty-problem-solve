#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;

        long long ans = 2 * (R - L) + 1;
        cout << ans << "\n";
    }

    return 0;
}