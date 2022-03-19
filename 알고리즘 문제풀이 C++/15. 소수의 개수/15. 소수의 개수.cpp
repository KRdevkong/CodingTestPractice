#include <iostream>

using namespace std;

int main() {
	// 변수선언
	int n;
	int cnt = 0;
	bool flag;

	// 입력
	cin >> n;

	// 소수 판별
	for (int i = 2; i <= n; i++) {
		flag = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag == 1) cnt++;
	}
	cout << cnt;

	return 0;
}