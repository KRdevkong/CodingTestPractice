# include <iostream>

using namespace std;

int main() {

	// ��������
	int n;	//�Է¹��� ����
	int res = 0;	// �����
	int c = 1;	// �ڸ��� �������
	int sum = 0;	// c�ڸ����� �ִ밪
	int d = 9;	// sum�� ���� ��

	// �Է�
	cin >> n;

	// ���� ����
	while (sum + d < n) {
		res = res + d * c;
		sum += d;
		c++;
		d *= 10;
	}

	// ��� ���
	res += (n - sum) * c;
	cout << res;


	return 0;
}