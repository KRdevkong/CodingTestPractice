#include <iostream>

using namespace std;

int main() {
	// ��������
	char word[100];
	char fix[100];
	int tmp = 0;

	// �� �Է¹ޱ�
	gets_s(word, sizeof(word));
	for (int i = 0; i < sizeof(word); i++) {	// �Է¹��� ���ڿ� ��ŭ �ݺ�
		if (word[i] != ' ') {	// �ش� ���ڰ� ������ �ƴҰ�� ��, �ҹ��� �Ǻ�
			if (word[i] >= 97 && word[i] <= 122) {
				fix[tmp] = word[i];	// �ҹ��ڴ� �״�� ����
				tmp++;
			}
			else if (word[i] >= 67 && word[i] <= 90) {
				fix[tmp] = word[i] + 32;	// �빮�ڴ� �ҹ��ڷ� ��ȯ �� ����
				tmp++;
			}
		}
	}
	// ���ڿ��� �������� �׻� '\0'���� ������ �ϹǷ� ������ �ڸ��� �Է�
	fix[tmp] = '\0';

	// ��� ���
	cout << fix;

	return 0;
}