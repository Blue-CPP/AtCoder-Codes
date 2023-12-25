#include <bits/stdc++.h>
using namespace std;

int main() {
	int N = 0, Average = 0, plus = 0;
	cin >> N;
	vector<int>A(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}
	for (int i = 0; i < N; i++) {
		plus += A.at(i);
	}
	plus /= N;
	for (int i = 0; i < N; i++) {
		cout << abs(A.at(i) -= plus) << endl;
	}
}
