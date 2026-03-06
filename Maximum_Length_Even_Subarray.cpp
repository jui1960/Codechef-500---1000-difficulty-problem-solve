#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if ((N * (N + 1) / 2) % 2 == 0)
            cout << N << "\n";
        else
            cout << N - 1 << "\n";
    }

    return 0;
}