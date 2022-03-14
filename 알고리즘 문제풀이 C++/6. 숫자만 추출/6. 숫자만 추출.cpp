#include<iostream>

using namespace std;

int main() {
	// 변수선언
	char a[50];
	int num = 0;
	int res = 1;

	// 입력
	cin >> a;

	// 문자, 숫자 판별 후 숫자 저장
	for (int i = 0; a[i]!= '\0'; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			num = num * 10 + a[i] - '0';
		}
	}
	// 약수 계산
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			res++;
		}
	}

	// 결과 출력
	cout << res;

	return 0;
}