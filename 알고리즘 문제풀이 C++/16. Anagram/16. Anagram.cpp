#include <iostream>

using namespace std;

int main() {
	// ��������
	char a[100];
	char b[100];
	int cnt[52] = { 0 }; //�� ���ĺ��� ���� Ƚ�� ���� ����
	
	// �Է�
	cin >> a;
	cin >> b;

	// �� �迭�� ������ �ٸ���� NO ���
	if (sizeof(a) / sizeof(char) != sizeof(b) / sizeof(char)) {
		cout << "NO";
		return 0;
	}

	// a�迭�� ���� ���ĺ� ���ϱ�, b�迭�� ���� ���ĺ� ����
	for (int i = 0; a[i] != '\0'; i++) {
		cnt[a[i] - 64]++;
		cnt[b[i] - 64]--;
	}

	// ���� ���ĺ� Ƚ���� �ٸ���� NO ��� �� ����
	for (int i = 0; i < 52; i++) {
		if (cnt[i] != 0) {
			cout << "NO";
			return 0;
		}
	}

	// ��� ������ ��� YES ���
	cout << "YES";

	return 0;
}