#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	// ここにプログラムを追記
	int i = 0;
	string AG, BG;
	while (i < A) {
		AG += "]";
		i++;
	}
	cout <<"A:" << AG << endl;
	i = 0;
	while (i < B) {
		BG += "]";
		i++;
	}
	cout <<"B:" << BG << endl;
}