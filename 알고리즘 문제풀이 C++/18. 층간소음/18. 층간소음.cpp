#include <iostream>

using namespace std;

int main() {
	// ��������
	int n;
	int m;
	int noise;
	int warning = 0;
	int warning_longest = -1;

	// ���� �Է� 
	cin >> n >> m;

	// �Է�, ���� �溸�ð� ���
	for (int i = 0; i < n; i++) {
		cin >> noise;
		if (noise > m) {
			warning++;
		}else{
			if (warning > warning_longest) {
				warning_longest = warning;
			}
			warning = 0;
		}
	}

	// ������
	cout << warning_longest;

	return 0;
}