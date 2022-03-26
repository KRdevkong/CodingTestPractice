#include <iostream>

using namespace std;

int main() {
	// 변수선언
	int n;
	int m;
	int noise;
	int warning = 0;
	int warning_longest = -1;

	// 변수 입력 
	cin >> n >> m;

	// 입력, 최장 경보시간 계산
	for (int i = 0; i < n; i++) {
		cin >> noise;
		if (noise > m) {
			warning++;
		}else{
			if (warning > warning_longest) {
				warning_longest = warning;
			}
			warning = 0;
		}
	}

	// 결과출력
	cout << warning_longest;

	return 0;
}