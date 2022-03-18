#include <iostream>
using namespace std;

int main() {
	// 변수선언
	int n;
	int cnt[10] = { 0 };
	int max_cnt;
	int max=0;

	// 입력
	cin >> n;
	// 맨 왼쪽 숫자를 제외하고 사용된 횟수 계산
	while (n > 9) {
		cnt[n % 10]++;
		n /= 10;
	}

	// 마지막 숫자 추가
	cnt[n]++;

	// 가장 많이 사용된 숫자 찾기
	for (int i = 0; i < 9; i++) {
		if (max <= cnt[i]) {
			max = cnt[i];	// 가장 많이 사용된 숫자 횟수
			max_cnt = i;	// 가장 많이 사용된 숫자
		}
	}

	// 결과 출력
	cout << max_cnt;

	return 0;
}