#include <iostream>

using namespace std;

int main() {
	// ��������
	int n;
	int quiz;
	int res;
	int sum;

	// �л� �� �Է�
	cin >> n;

	// �л� ���� �� �� �Է� �� ���� ���� ���
	for (int i = 0; i < n; i++) {
		cin >> quiz >> res;
		sum = 0;
		for (int j = 1; j <= quiz; j++) {
			sum += j;
		}
		if (sum == res) {
			cout << "YES \n";
		}
		else {
			cout << "NO \n";
		}
	}

	return 0;
}