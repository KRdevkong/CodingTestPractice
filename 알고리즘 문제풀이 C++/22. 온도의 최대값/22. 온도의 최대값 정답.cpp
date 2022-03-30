#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, sum = 0, max;

	cin >> n >> k;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < k; i++) {
		sum += a[i];
	}
	max = sum;
	for (int i = k; i < n; i ++) {
		sum = sum + (a[i] - a[i - k]);
		if (sum < max) max = sum;
	}

	cout << max;


	return 0;
}