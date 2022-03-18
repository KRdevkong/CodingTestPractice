#include <iostream>

using namespace std;

// ������ �Լ�
int reverse(int x) {
	int rev = 0, tmp;
	while (x > 0) {
		tmp = x % 10; // �� ���ڸ��� ����
		rev = rev * 10 + tmp; // ���尪�� �������� �а� �����ʿ� ���ڸ��� �߰�
		x /= 10; // ���ڸ��� ����
	}
	return rev;
}

// �Ҽ� �Ǻ�
bool isPrime(int x) {
	int i;
	if (x == 1) return false; // ����� 1�� ������ ���
	bool flag = true;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	// ��������
	int n;
	int num;

	// �Է��� ������ �� �Է�
	cin >> n;

	// �Լ� ����
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (isPrime(reverse(num))) {
			cout << reverse(num) << " ";
		}
	}
}