#include <iostream>
using namespace std;

int main() {
	// ��������
	int n;
	int cnt[10] = { 0 };
	int max_cnt;
	int max=0;

	// �Է�
	cin >> n;
	// �� ���� ���ڸ� �����ϰ� ���� Ƚ�� ���
	while (n > 9) {
		cnt[n % 10]++;
		n /= 10;
	}

	// ������ ���� �߰�
	cnt[n]++;

	// ���� ���� ���� ���� ã��
	for (int i = 0; i < 9; i++) {
		if (max <= cnt[i]) {
			max = cnt[i];	// ���� ���� ���� ���� Ƚ��
			max_cnt = i;	// ���� ���� ���� ����
		}
	}

	// ��� ���
	cout << max_cnt;

	return 0;
}