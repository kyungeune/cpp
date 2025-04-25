#include <iostream>
using namespace std;

int main() {
	// 실습 3-1
	int arr[5] = { 10,20,30,40,50 };

	cout << "현재 배열은" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	cout << "\n배열 거꾸로 출력" << endl;
	for (int i = 4; i >= 0; i--) {
		cout << arr[i] << " ";
	}



	// 실습 3-2
	int a, b;
	cout << "두 수를 입력하세요 : ";
	cin >> a >> b;
	cout << "두 수를 다시 출력합니다 : ";

	int x = (a+5) % 2;
	switch (x)
	{
	case 0:
		cout << b << ", " << a << endl;
		break;
	default:
		cout << a+5 << ", " << b << endl;
		break;
	}


	// 실습 3-3
	// for문 사용
	
	int sample[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0;i < 10;i++) {
		if(sample[i]%2==0)
			cout << sample[i] << endl;
	}

	// while문과 포인터 사용
	int sample[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr = sample;  // *ptr은 정수값
	int cnt = 1;  // *ptr이 끝난 이후에도 쓰레기 값을 갖기 때문!
	while (cnt <= 10) {
		if (*ptr % 2 == 0) {
			cout << *ptr << endl;
		}
		ptr++;
		cnt++;
	}



	// 실습 3-4
	int num;

	cout << "음수가 아닌 정수를 입력하세요: ";
	cin >> num;

	// 0은 예외로 따로 처리
	if (num == 0) {
		cout << "가장 왼쪽 숫자: 0" << endl;
		return 0;
	}

	// 가장 왼쪽 자리 숫자를 찾기
	do {
		num = num / 10;
	} while (num >= 10);

	cout << "가장 왼쪽 숫자: " << num << endl;


	return 0;
}