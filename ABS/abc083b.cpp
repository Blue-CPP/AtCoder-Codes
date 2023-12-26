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
    while (n > 0) { // n が 0 になるまで
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a <= findSumOfDigits(i + 1) && findSumOfDigits(i + 1) <= b)
            ans += i + 1;
    }
    cout << ans << endl;
}