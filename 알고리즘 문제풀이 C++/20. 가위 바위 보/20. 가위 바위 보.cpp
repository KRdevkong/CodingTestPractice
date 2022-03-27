#include <iostream>

using namespace std;

int main() {
	// 변수선언
	int n;
	int a[100];
	int b;

	// 게임 수 입력
	cin >> n;

	// a 가위바위보 입력
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// b 입력, 게임 결과 출력
	for (int i = 0; i < n; i++) {
		cin >> b;
		if (a[i] == b) {
			cout << "D\n";
		}
		else if (a[i] == 1 && b == 2 || a[i] == 2 && b == 3 || a[i] == 3 && b == 1) {
			cout << "B\n";
		}
		else {
			cout << "A\n";
		}
	}
	return 0;
}