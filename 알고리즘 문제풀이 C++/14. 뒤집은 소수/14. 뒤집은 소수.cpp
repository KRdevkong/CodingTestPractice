#include <iostream>

using namespace std;

// 뒤집기 함수
int reverse(int x) {
	int rev = 0, tmp;
	while (x > 0) {
		tmp = x % 10; // 맨 뒷자리수 저장
		rev = rev * 10 + tmp; // 저장값에 왼쪽으로 밀고 오른쪽에 뒷자릿수 추가
		x /= 10; // 뒷자릿수 삭제
	}
	return rev;
}

// 소수 판별
bool isPrime(int x) {
	int i;
	if (x == 1) return false; // 뒤집어서 1이 나오는 경우
	bool flag = true;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	// 변수선언
	int n;
	int num;

	// 입력할 정수의 수 입력
	cin >> n;

	// 함수 실행
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (isPrime(reverse(num))) {
			cout << reverse(num) << " ";
		}
	}
}