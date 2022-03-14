# include <iostream>

using namespace std;

int main() {
	// 변수선언
	char a[31];
	int flg = 0;	// 성립 판별 변수

	// 입력
	cin >> a;

	// 판별
	for (int i = 0; a[i] != '\0'; i++) {	// 문자열의 마지막인 '\0'까지 반복
		if (a[i] == '(') {
			flg++;
		}
		else if(a[i] ==')') {	
			flg--;
		}
		if (flg < 0) {
			break;
		}
	}
	// 결과 판별
	if (flg == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}