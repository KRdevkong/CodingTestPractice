#include <iostream>

using namespace std;

int main() {
	// ����, �迭 ����
	int n;
	int cnt[50001] = {0};

	// �Է�
	cin >> n;

	// ���������� ��� �� ��� ã��
	for (int i = 1; i <=n; i++) {
		for (int j = i; j <= n; j= j + i) {
			cnt[j]++;
		}
	}

	// ���
	for (int i = 1; i <= n; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}