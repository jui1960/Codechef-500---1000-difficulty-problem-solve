#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;   // number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;

        int count = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            // after mutation
            if ((x + K) % 7 == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}