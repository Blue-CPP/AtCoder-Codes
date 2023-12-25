#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (auto i : s) {
        if (i == '1')
            ans++;
    }
    cout << ans << endl;
    return 0;
}
