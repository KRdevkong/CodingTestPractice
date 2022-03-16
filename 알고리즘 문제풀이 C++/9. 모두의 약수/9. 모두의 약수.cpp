#include <iostream>

using namespace std;

int main() {
	// 변수, 배열 선언
	int n;
	int cnt[50001] = {0};

	// 입력
	cin >> n;

	// 변수까지의 모든 수 배수 찾기
	for (int i = 1; i <=n; i++) {
		for (int j = i; j <= n; j= j + i) {
			cnt[j]++;
		}
	}

	// 출력
	for (int i = 1; i <= n; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}