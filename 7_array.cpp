#include <iostream>
using namespace std;

void main() {
	int a[2] = { 0,1 };
	int b[2][3] = { {11,12,13},{21,22,23} };

	// 배열의 크기
	cout << sizeof(a) << endl;  // 8
	cout << sizeof(a[1]) << endl;  // 4

	cout << sizeof(b) << endl;  // 24
	cout << sizeof(b[1]) << endl;  // 12

	
	// 배열 포인터
	int arr[2] = { 1,2 };
	int* p = arr;
	int (*p2)[2] = &arr;  // 2개짜리 int 배열을 가리키는 포인터

	cout << p[0] << ', ' << p[1] << endl;  // 잘못된 출력. C++에선 ,를 문자 표기로 인식함 ex) 'A'
	cout << p[0] << ", " << p[1] << endl;  // 1, 2

	cout << sizeof(p) << endl;  // 8
	cout << sizeof(p2) << endl;  // 8


	// 배열과 포인터 코드 예측
	int sample[5] = { 5,10,15,20,25 };
	int* p = sample;
	int(*pp)[5] = &sample;

	cout << *sample + 2 << endl;
	cout << *(sample + 2) << endl << endl;

	cout << *p << endl;
	cout << *(p + 5) << endl;
	cout << p[3] << endl << endl;

	cout << pp[0] << endl;
	cout << (*pp)[1] << endl;

	// 정답
	//7
	//15

	//5
	//-858993460 (쓰레기값)
	//20

	//000000E4BECFF728 (sample 배열의 주소)
	//10


	// 1차원 배열과 포인터 예시
	int arr[4] = { 10,20,30,40 };
	int* p = arr;

	cout << *(arr + 1) << endl;
	cout << p[2] << endl;
	cout << *p + 3 << endl;

	// 정답
	//20
	//30
	//13

	
	// 1차원 배열과 포인터 예시
	int nums[5] = { 100,200,300,400,500 };
	int* p = nums;

	cout << *(p + 4) << endl;
	cout << p[0] + p[3] << endl;

	// 정답
	// 500
	// 500


	// 1차원 배열과 포인터 예시
	int vals[5] = { 1,3,5,7,9 };
	int(*pp)[5] = &vals;

	cout << (*pp)[0] << endl;
	cout << (*pp)[4] << endl;
	cout << *(*pp + 2) << endl;

	// 정답
	// 1
	// 9
	// 5


	// 배열과 포인터
	int data[3] = { 7,14,21 };
	int* pArr[3] = { &data[0],&data[1],&data[2] };
	int(*ptr)[3] = &data;

	cout << *pArr[1] << endl;
	cout << (*ptr)[2] << endl;

	// 정답
	// 14
	// 21

	
	// 배열과 포인터 정답
	1. int arr[], int size
	or
	int* arr, int size

	2. char str[]
	or
	char* str

	3. int sumArray(int[] data, int size)
	or
	int sumArray(int* arr, int size)
	{
		int ans = 0;
		for (int i = 0; i < size; i++) {
			ans += data[i];
		}
		return ans;
	}

	
	// 2차원 배열과 포인터
	int arr[2][3] = { {11,12,13},{21,22,23} };
	int(*pp)[3] = arr;

	cout << pp[1][2] << endl;
	cout << *(*(pp+1)+1) << endl;
	cout << *pp[1] << endl;
	cout << (*pp)[1] << endl;

	// 정답
	// 23
	// 22
	// 21
	// 12

	// 2차원 배열과 포인터 예시
	// 정답
	// void print(int m[][4], int rows, int cols)
	// or
	// void print(int (*m)[4], int rows, int cols)
}