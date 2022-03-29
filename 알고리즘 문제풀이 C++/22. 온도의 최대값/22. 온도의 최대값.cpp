#include <iostream>

using namespace std;

int main() {
	// 변수선언
	int n;	// 입력할 온도의 개수
	int k;	// 연속 온도
	int max = 0;	// 최대값
	int sum;	// 온도의 합
	int c[100];	//온도 입력 배열
	
	// 변수 입력
	cin >> n >> k;

	// 온도 입력
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	// 온도 계산
	for (int i = 0; i < n - k + 1; i++) {
		sum = 0;
		for (int j = i; j < i + k; j++) {
			sum += c[j];
		}
		if (sum > max) {
			max = sum;
		}
	}
	cout << max;
	return  0;
}