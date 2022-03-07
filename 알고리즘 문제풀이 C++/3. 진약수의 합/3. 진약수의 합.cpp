#include <iostream>

using namespace std;

int main() {
	// 변수선언
	int n, sum = 1;
	// n 입력
	cin >> n;
	// 항상 출력될 값 출력
	cout << 1;
	// 1은 출력했으니 2 부터 계산 반복
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << "+" << i;
			sum += i;
		}
	}
	// 결과값 출력
	cout << "=" << sum;

	return 0;
}