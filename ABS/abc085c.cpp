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
int findSumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    long long n, y; cin >> n >> y;
    for (long long i = 0; i <= n; ++i) {
        for (long long j = 0; j <= n; ++j) {
            long long k = n - i - j;
            if (0 > k || n < k)
                continue;
            if (10000 * i + 5000 * j + 1000 * k == y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}