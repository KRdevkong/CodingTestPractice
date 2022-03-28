#include <iostream>

using namespace std;

int main() {
	// 변수 선언
	int a[10];
	int b[10];
	int a_score = 0;
	int b_score = 0;

	// a 입력
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	// b 입력
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}

	// 점수 계산
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			a_score += 3;
		}
		else if (b[i] > a[i]) {
			b_score += 3;
		}
		else {
			a_score++;
			b_score++;
		}
	}

	// 승자 판별
	if (a_score > b_score) {
		cout << "A";
	}
	else if (b_score > a_score) {
		cout << "B";
	}
	else if (a_score == b_score) { // 동점인 경우 마지막 이긴사람 찾기
		if (a[9] > b[9]) {
			cout << "A";
		}
		else if (b[9] > a[9]) {
			cout << "B";
		}
	}
	else { // 모두 동점인 경우 무승부
		cout << "D";
	}

	return 0;
}