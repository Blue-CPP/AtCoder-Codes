﻿#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    string text;
    int price = 0;
    cin >> p;

    // パターン1
    if (p == 1) {
        cin >> price;
    }

    // パターン2
    if (p == 2) {
        cin >> text;
        cin >> price;
    }

    int N;
    cin >> N;
    if (p == 2) {
        cout << text << "!" << endl;
    }
    
    cout << price * N << endl;
}