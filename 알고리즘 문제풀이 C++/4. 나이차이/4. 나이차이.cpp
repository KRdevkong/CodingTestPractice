#include <iostream>
using namespace std;

int main() {
	// ���� ����
	int n, res;
	// �Է��� �ο� �� �Է�
	cin >> n;
	// �迭, �������� �� �ʱ�ȭ
	int age[100];
	int min = 100;
	int max = 0;
	// ���� �Է°� ���ÿ� �ִ�, �ּҰ� ���
	for (int i = 0; i < n; i++) {
		cin >> age[i];
		if (age[i] < min) {
			min = age[i];
		}
		if (age[i] > max) {
			max = age[i];
		}
	}
	// ��� ���
	res = max - min;
	cout << res;

	return 0;
}
