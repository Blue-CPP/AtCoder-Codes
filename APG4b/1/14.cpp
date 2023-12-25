#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C;
	vector<int>tall(3, 0);
	cin >> A >> B >> C;
	tall.at(0) = A, tall.at(1) = B, tall.at(2) = C;
	sort(tall.begin(), tall.end());
	cout << tall.at(2) - tall.at(0) << endl;
}
