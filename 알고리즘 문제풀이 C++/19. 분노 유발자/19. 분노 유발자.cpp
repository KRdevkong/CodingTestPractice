#include <iostream>
#include <string>
using namespace std;

int main() {
	// ��������
	int n;
	int line[100];
	int tallest;
	int blocker = 0;

	// �л� �� �Է�
	cin >> n;

	// �� �Է�
	for (int i = 0; i < n; i++) {
		cin >> line[i];
	}

	// Ű�� ���� ū �л��� �� ���ڸ� �л����� �ʱ�ȭ
	tallest = line[n - 1];

	// �г� ������ �ڿ��� ���� Ž��
	for (int i = n -1; i > 0; i--) {
		if (line [i - 1] - 1 > tallest) {
			blocker++;
			tallest = line[i - 1];
		}
	}

	// ��� ���
	cout << blocker;

	return 0;
}