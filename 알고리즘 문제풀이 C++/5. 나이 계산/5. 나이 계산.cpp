#include <iostream>

#define YEAR 2022

using namespace std;

int main() {
	// 변수선언
	char id[20];
	int age;

	// 주민등록번호 입력
	cin >> id;
	
	// 나이 판별
	if (id[7] == '1' || id[7] == '2') {
		age = YEAR - (1900 + ((id[0] - '0') * 10 + (id[1] - '0'))) + 1;
	}
	else {
		age = YEAR - (2000 + ((id[0] - '0') * 10 + (id[1] - '0'))) + 1;
	}
	// 성별 판별 및 결과 출력
	if (id[7] == '1' || id[7] == '3') {
		cout << age << " M";
	}
	else {
		cout << age << " W";
	}

	return 0;
}