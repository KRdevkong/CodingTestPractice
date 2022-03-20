#include <iostream>

using namespace std;

int main() {
	// 변수선언
	char a[100];
	char b[100];
	int cnt[52] = { 0 }; //각 알파벳이 사용된 횟수 저장 공간
	
	// 입력
	cin >> a;
	cin >> b;

	// 각 배열의 갯수가 다를경우 NO 출력
	if (sizeof(a) / sizeof(char) != sizeof(b) / sizeof(char)) {
		cout << "NO";
		return 0;
	}

	// a배열에 사용된 알파벳 더하기, b배열에 사용된 알파벳 빼기
	for (int i = 0; a[i] != '\0'; i++) {
		cnt[a[i] - 64]++;
		cnt[b[i] - 64]--;
	}

	// 사용된 알파벳 횟수가 다를경우 NO 출력 후 종료
	for (int i = 0; i < 52; i++) {
		if (cnt[i] != 0) {
			cout << "NO";
			return 0;
		}
	}

	// 모두 만족할 경우 YES 출력
	cout << "YES";

	return 0;
}