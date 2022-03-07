#include<iostream>

using namespace std;

int main() {

	// 변수선언
	int a, b;
	int sum = 0;

	// 값 입력
	cin >> a >> b;

	// 수식 출력, 합 계산
	for (int i = a; i < b;i++) {
		sum += i;
		cout << i << '+';
	}

	// 마지막 값, = 출력, 마지막 합 계산, 결과 출력
	sum += b;
	cout << b << '=' << sum;
	
	return 0;
}