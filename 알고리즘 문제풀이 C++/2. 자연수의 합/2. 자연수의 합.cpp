#include<iostream>

using namespace std;

int main() {

	// ��������
	int a, b;
	int sum = 0;

	// �� �Է�
	cin >> a >> b;

	// ���� ���, �� ���
	for (int i = a; i < b;i++) {
		sum += i;
		cout << i << '+';
	}

	// ������ ��, = ���, ������ �� ���, ��� ���
	sum += b;
	cout << b << '=' << sum;
	
	return 0;
}