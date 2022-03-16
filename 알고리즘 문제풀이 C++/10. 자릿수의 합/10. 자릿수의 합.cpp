#include <iostream>

using namespace std;

int main() {
	int n; // 입력할 개수
	int val;	// 입력받을 수
	int tmp;	// 입력받은 수 복사
	int sum;	// 각 자릿수의 합
	int max_sum = 0;	// 합의 최댓값
	int max_val = 0;	// 합이 최댓값인 수

	// 입력
	cin >> n;

	// 판별 시작
	for (int i = 0; i < n; i++) {
		cin >> val; // 입력
		sum = 0;	// 합 초기화
		tmp = val;	// 입력받은 값 복사
		while (1) {
			sum += tmp % 10;	// 1의자리 더하기
			tmp /= 10;	// 마지막 자릿수 삭제
			if (tmp < 1) {	// 각 자릿수를 모두 더한 뒤
				if (max_sum < sum ){	// 합이 최대 합보다 클때 저장
					max_val = val;
					max_sum = sum;
				}
				else if (max_sum = sum) {	// 합이 최대합과 같다면 입력 받은 값이 더 큰 수를 저장
					if (max_val < val) {
						max_val = val;
					}
				}
				break;
			}
		}
		
	}

	// 출력
	cout << max_val;

	return 0;
}