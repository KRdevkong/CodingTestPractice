#include<iostream>

using namespace std;

int main() {
	// ��������
	int n;
	int cnt=0;
	int tmp;

	// �Է�
	cin >> n;

	// ���� ����
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			cnt++;
			tmp /= 10;
		}
	}

	// ���
	cout << cnt;

	return 0;
}