#include <iostream>

using namespace std;

int main() {
	// ��������
	int n;	// �Է��� �µ��� ����
	int k;	// ���� �µ�
	int max = 0;	// �ִ밪
	int sum;	// �µ��� ��
	int c[100];	//�µ� �Է� �迭
	
	// ���� �Է�
	cin >> n >> k;

	// �µ� �Է�
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	// �µ� ���
	for (int i = 0; i < n - k + 1; i++) {
		sum = 0;
		for (int j = i; j < i + k; j++) {
			sum += c[j];
		}
		if (sum > max) {
			max = sum;
		}
	}
	cout << max;
	return  0;
}