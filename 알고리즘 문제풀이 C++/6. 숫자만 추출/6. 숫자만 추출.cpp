#include<iostream>

using namespace std;

int main() {
	// ��������
	char a[50];
	int num = 0;
	int res = 1;

	// �Է�
	cin >> a;

	// ����, ���� �Ǻ� �� ���� ����
	for (int i = 0; a[i]!= '\0'; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			num = num * 10 + a[i] - '0';
		}
	}
	// ��� ���
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			res++;
		}
	}

	// ��� ���
	cout << res;

	return 0;
}