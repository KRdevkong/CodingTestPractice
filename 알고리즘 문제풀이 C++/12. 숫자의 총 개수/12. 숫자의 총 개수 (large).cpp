# include <iostream>

using namespace std;

int main() {

	// 변수선언
	int n;	//입력받을 공간
	int res = 0;	// 결과값
	int c = 1;	// 자릿수 저장공간
	int sum = 0;	// c자릿수의 최대값
	int d = 9;	// sum에 더할 값

	// 입력
	cin >> n;

	// 숫자 세기
	while (sum + d < n) {
		res = res + d * c;
		sum += d;
		c++;
		d *= 10;
	}

	// 결과 출력
	res += (n - sum) * c;
	cout << res;


	return 0;
}