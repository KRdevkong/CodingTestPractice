#include <iostream>

using namespace std;

int main() {
	// ���� ����
	int a[10];
	int b[10];
	int a_score = 0;
	int b_score = 0;

	// a �Է�
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	// b �Է�
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}

	// ���� ���
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

	// ���� �Ǻ�
	if (a_score > b_score) {
		cout << "A";
	}
	else if (b_score > a_score) {
		cout << "B";
	}
	else if (a_score == b_score) { // ������ ��� ������ �̱��� ã��
		if (a[9] > b[9]) {
			cout << "A";
		}
		else if (b[9] > a[9]) {
			cout << "B";
		}
	}
	else { // ��� ������ ��� ���º�
		cout << "D";
	}

	return 0;
}