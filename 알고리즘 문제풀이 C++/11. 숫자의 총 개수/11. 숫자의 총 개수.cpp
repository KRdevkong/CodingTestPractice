#include<iostream>

using namespace std;

int main() {
	// 변수선언
	int n;
	int cnt=0;
	int tmp;

	// 입력
	cin >> n;

	// 숫자 세기
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			cnt++;
			tmp /= 10;
		}
	}

	// 출력
	cout << cnt;

	return 0;
}