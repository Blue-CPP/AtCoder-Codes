#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A, B;
	string math;
	cin >> N;
    cin >> A;

	// ここにプログラムを追記
	for (int i = 0; i < N; ++i) {
		cin >> math >> B;
		if (math == "+")
		    A += B;
		else if (math == "-")
			A -= B;
		else if (math == "*")
			A *= B;
		else if (math == "/")
			if (B == 0) {
				cout << "error" << endl;
				break;
			}
			else
				A /= B;
				
		cout << i + 1 << ":" << A << endl;
	}
}