#include <iostream>
using namespace std;

int main() {
	// 변수 선언
	int n, res;
	// 입력할 인원 수 입력
	cin >> n;
	// 배열, 변수선언 및 초기화
	int age[100];
	int min = 100;
	int max = 0;
	// 나이 입력과 동시에 최대, 최소값 계산
	for (int i = 0; i < n; i++) {
		cin >> age[i];
		if (age[i] < min) {
			min = age[i];
		}
		if (age[i] > max) {
			max = age[i];
		}
	}
	// 결과 출력
	res = max - min;
	cout << res;

	return 0;
}
