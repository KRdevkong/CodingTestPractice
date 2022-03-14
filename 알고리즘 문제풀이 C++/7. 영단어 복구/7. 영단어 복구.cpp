#include <iostream>

using namespace std;

int main() {
	// 변수선언
	char word[100];
	char fix[100];
	int tmp = 0;

	// 줄 입력받기
	gets_s(word, sizeof(word));
	for (int i = 0; i < sizeof(word); i++) {	// 입력받은 문자열 만큼 반복
		if (word[i] != ' ') {	// 해당 문자가 공백이 아닐경우 대, 소문자 판별
			if (word[i] >= 97 && word[i] <= 122) {
				fix[tmp] = word[i];	// 소문자는 그대로 저장
				tmp++;
			}
			else if (word[i] >= 67 && word[i] <= 90) {
				fix[tmp] = word[i] + 32;	// 대문자는 소문자로 변환 후 저장
				tmp++;
			}
		}
	}
	// 문자열의 마지막은 항상 '\0'으로 끝나야 하므로 마지막 자리에 입력
	fix[tmp] = '\0';

	// 결과 출력
	cout << fix;

	return 0;
}