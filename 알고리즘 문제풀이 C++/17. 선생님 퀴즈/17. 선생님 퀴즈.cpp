#include <iostream>

using namespace std;

int main() {
	// 변수선언
	int n;
	int quiz;
	int res;
	int sum;

	// 학생 수 입력
	cin >> n;

	// 학생 퀴즈 및 답 입력 후 정답 여부 출력
	for (int i = 0; i < n; i++) {
		cin >> quiz >> res;
		sum = 0;
		for (int j = 1; j <= quiz; j++) {
			sum += j;
		}
		if (sum == res) {
			cout << "YES \n";
		}
		else {
			cout << "NO \n";
		}
	}

	return 0;
}