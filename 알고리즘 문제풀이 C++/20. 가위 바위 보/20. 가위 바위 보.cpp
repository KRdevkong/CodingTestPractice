#include <iostream>

using namespace std;

int main() {
	// ��������
	int n;
	int a[100];
	int b;

	// ���� �� �Է�
	cin >> n;

	// a ���������� �Է�
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// b �Է�, ���� ��� ���
	for (int i = 0; i < n; i++) {
		cin >> b;
		if (a[i] == b) {
			cout << "D\n";
		}
		else if (a[i] == 1 && b == 2 || a[i] == 2 && b == 3 || a[i] == 3 && b == 1) {
			cout << "B\n";
		}
		else {
			cout << "A\n";
		}
	}
	return 0;
}