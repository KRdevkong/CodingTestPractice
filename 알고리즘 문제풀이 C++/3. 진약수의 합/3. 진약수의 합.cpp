#include <iostream>

using namespace std;

int main() {
	// ��������
	int n, sum = 1;
	// n �Է�
	cin >> n;
	// �׻� ��µ� �� ���
	cout << 1;
	// 1�� ��������� 2 ���� ��� �ݺ�
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << "+" << i;
			sum += i;
		}
	}
	// ����� ���
	cout << "=" << sum;

	return 0;
}