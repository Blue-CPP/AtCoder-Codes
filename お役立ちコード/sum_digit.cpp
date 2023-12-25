#include <bits/stdc++.h>
using namespace std;

int main() {
	//十進法においての各桁の数の和を求める
	int sum_digit = 0, n = 4649;
	//nが0より大きい間繰り返す
	while (n > 0) {
		//nを10で割った余りをsum_digitに足す
		sum_digit += n % 10;
		//nを10で割る
		n /= 10;
	}
	//sum_digitは4+6+4+9で23となる
	cout << sum_digit << endl;
}
