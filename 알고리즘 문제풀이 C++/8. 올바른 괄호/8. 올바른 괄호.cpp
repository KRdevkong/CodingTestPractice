# include <iostream>

using namespace std;

int main() {
	// ��������
	char a[31];
	int flg = 0;	// ���� �Ǻ� ����

	// �Է�
	cin >> a;

	// �Ǻ�
	for (int i = 0; a[i] != '\0'; i++) {	// ���ڿ��� �������� '\0'���� �ݺ�
		if (a[i] == '(') {
			flg++;
		}
		else if(a[i] ==')') {	
			flg--;
		}
		if (flg < 0) {
			break;
		}
	}
	// ��� �Ǻ�
	if (flg == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}