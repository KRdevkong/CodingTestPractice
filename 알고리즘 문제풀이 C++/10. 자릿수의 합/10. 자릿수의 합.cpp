#include <iostream>

using namespace std;

int main() {
	int n; // �Է��� ����
	int val;	// �Է¹��� ��
	int tmp;	// �Է¹��� �� ����
	int sum;	// �� �ڸ����� ��
	int max_sum = 0;	// ���� �ִ�
	int max_val = 0;	// ���� �ִ��� ��

	// �Է�
	cin >> n;

	// �Ǻ� ����
	for (int i = 0; i < n; i++) {
		cin >> val; // �Է�
		sum = 0;	// �� �ʱ�ȭ
		tmp = val;	// �Է¹��� �� ����
		while (1) {
			sum += tmp % 10;	// 1���ڸ� ���ϱ�
			tmp /= 10;	// ������ �ڸ��� ����
			if (tmp < 1) {	// �� �ڸ����� ��� ���� ��
				if (max_sum < sum ){	// ���� �ִ� �պ��� Ŭ�� ����
					max_val = val;
					max_sum = sum;
				}
				else if (max_sum = sum) {	// ���� �ִ��հ� ���ٸ� �Է� ���� ���� �� ū ���� ����
					if (max_val < val) {
						max_val = val;
					}
				}
				break;
			}
		}
		
	}

	// ���
	cout << max_val;

	return 0;
}