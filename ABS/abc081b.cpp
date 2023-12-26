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
    int n;
    cin >> n;
    vector<long long>a(n);
    for (auto& i : a)
        cin >> i;
    vector<long long>b(n);
    for (long long i = 0; i < n; ++i) {
        long long j = 0;
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            j++;
        }
        b[i] = j;
    }
    sort(b.begin(), b.end());
    cout << b[0] << endl;
}