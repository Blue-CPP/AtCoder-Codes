#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    long long ans = 9999;
    for (int i = 0; i <= 9999; ++i) {
        for (int j = 0; j <= 9999; ++j) {
            long long k = n - a * i - b * j;
            if (k >= 0 && k%c==0) {
                ans = min(ans, 1ll * i + j + k / c);
            }
        }
    }
    cout << ans << endl;
}
//つら
