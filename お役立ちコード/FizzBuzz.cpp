#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int n = 1; n <= N; ++n) {
		//3でも5でも割り切れるのでFizzBuzz
		if (N % 3 == 0 && N % 5 == 0) {
			cout << "FizzBuzz" << endl;
		}
		//3で割り切れるのでFizz
		else if (n % 3 == 0) {
			cout << "Fizz" << endl;
		}
		//5で割り切れるのでBuzz
		else if (n % 5 == 0) {
			cout << "Buzz" << endl;
		}
		//3でも5でも割り切れないのでNを出力
		else {
			cout << N << endl;
		}
	}
}
