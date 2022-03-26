#include <iostream>
#include <string>
using namespace std;

int main() {
	// 변수선언
	int n;
	int line[100];
	int tallest;
	int blocker = 0;

	// 학생 수 입력
	cin >> n;

	// 줄 입력
	for (int i = 0; i < n; i++) {
		cin >> line[i];
	}

	// 키가 가장 큰 학생을 맨 뒷자리 학생으로 초기화
	tallest = line[n - 1];

	// 분노 유발자 뒤에서 부터 탐색
	for (int i = n -1; i > 0; i--) {
		if (line [i - 1] - 1 > tallest) {
			blocker++;
			tallest = line[i - 1];
		}
	}

	// 결과 출력
	cout << blocker;

	return 0;
}