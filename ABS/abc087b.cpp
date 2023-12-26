#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string cut(string sample, int from, int to) //文字列のfrom番目からto番目までを切り取る関数
{
    string textans;
    for (int ijk = from; ijk < to; ++ijk) {
        textans += sample[ijk];
    }
    return textans;
}
bool isSquare(long long n) {
    long long d = (long long)sqrt(n) - 1;
    while (d * d < n) ++d;
    return d * d == n;
}
int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    for (int i = 0; i <= a; ++i) {
        for (int j = 0; j <= b; ++j) {
            for (int k = 0; k <= c; ++k) {
                if (500 * i + 100 * j + k * 50 == x)
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}