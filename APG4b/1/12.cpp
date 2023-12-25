#include <bits/stdc++.h> 
using namespace std; 

int main() {
	string S;
	int a = 1;
	cin >> S;
	for (int i = 0; i < S.size(); i++) {
		if (S.at(i) == '+')
			a++;
		else if (S.at(i) == '-')
			a--;
	}
	cout << a << endl;
}
