#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
#include <string>

using namespace std;

void main()
{
	// 6-1. 어떤 달의 날짜 수를 배열을 사용해서 출력하는 프로그램을 만드시오.
	int month = 0;
	int arr[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	// int* p = arr;  // 아래와 동일
	int* p = &arr[0];
	// int* p = &arr;  // 오류나는 코드

	do {
		cout << "월을 입력해주세요. (1~12) : ";
		cin >> month;
	} while (month > 12 || month < 1);

	cout << "해당 월에는 " << p[month-1] << "개의 일이 있습니다." << endl;




	// 6-2. 1에서 50 사이의 랜덤한 정수 10개를 요소로 갖는 배열을 만들고, 이러한 배열에서 최솟값과 최댓값을 구해 출력하는 프로그램을 만드세요.
	const int size = 10;
	int arr[size];

	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (50) + 1;  // 1~50 사이 랜덤한 정수 생성
	}

	int max = 0;
	int min = 51;
	cout << "배열 요소 출력 : " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	cout << "\n최댓값은 " << max << "이고, 최솟값은 " << min << "입니다." << endl;




	// 6-3. 주어진 2차원 배열에 대해 row 방향 혹은 col 방향으로 읽는 프로그램을 작성하시오
	string w;
	int arr[2][3] = {{1,4,6},{3,5,1}};
	int* p = &arr[0][0];

	cout << "어떤 방향으로 읽을 것인지 기입하십시오. (row or col):";
	cin >> w;

	
	if (w.compare("row") == 0) {

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}

	}

	if (w.compare("col") == 0) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << *(p + j) << " ";
			}
			cout << endl;
			p = p + 3;
		}
	}
	
}