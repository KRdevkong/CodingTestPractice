#include <iostream>

#define YEAR 2022

using namespace std;

int main() {
	// ��������
	char id[20];
	int age;

	// �ֹε�Ϲ�ȣ �Է�
	cin >> id;
	
	// ���� �Ǻ�
	if (id[7] == '1' || id[7] == '2') {
		age = YEAR - (1900 + ((id[0] - '0') * 10 + (id[1] - '0'))) + 1;
	}
	else {
		age = YEAR - (2000 + ((id[0] - '0') * 10 + (id[1] - '0'))) + 1;
	}
	// ���� �Ǻ� �� ��� ���
	if (id[7] == '1' || id[7] == '3') {
		cout << age << " M";
	}
	else {
		cout << age << " W";
	}

	return 0;
}