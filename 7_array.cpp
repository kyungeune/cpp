#include <iostream>
using namespace std;

void main() {
	int a[2] = { 0,1 };
	int b[2][3] = { {11,12,13},{21,22,23} };

	// �迭�� ũ��
	cout << sizeof(a) << endl;  // 8
	cout << sizeof(a[1]) << endl;  // 4

	cout << sizeof(b) << endl;  // 24
	cout << sizeof(b[1]) << endl;  // 12

	
	// �迭 ������
	int arr[2] = { 1,2 };
	int* p = arr;
	int (*p2)[2] = &arr;  // 2��¥�� int �迭�� ����Ű�� ������

	cout << p[0] << ', ' << p[1] << endl;  // �߸��� ���. C++���� ,�� ���� ǥ��� �ν��� ex) 'A'
	cout << p[0] << ", " << p[1] << endl;  // 1, 2

	cout << sizeof(p) << endl;  // 8
	cout << sizeof(p2) << endl;  // 8


	// �迭�� ������ �ڵ� ����
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

	// ����
	//7
	//15

	//5
	//-858993460 (�����Ⱚ)
	//20

	//000000E4BECFF728 (sample �迭�� �ּ�)
	//10


	// 1���� �迭�� ������ ����
	int arr[4] = { 10,20,30,40 };
	int* p = arr;

	cout << *(arr + 1) << endl;
	cout << p[2] << endl;
	cout << *p + 3 << endl;

	// ����
	//20
	//30
	//13

	
	// 1���� �迭�� ������ ����
	int nums[5] = { 100,200,300,400,500 };
	int* p = nums;

	cout << *(p + 4) << endl;
	cout << p[0] + p[3] << endl;

	// ����
	// 500
	// 500


	// 1���� �迭�� ������ ����
	int vals[5] = { 1,3,5,7,9 };
	int(*pp)[5] = &vals;

	cout << (*pp)[0] << endl;
	cout << (*pp)[4] << endl;
	cout << *(*pp + 2) << endl;

	// ����
	// 1
	// 9
	// 5


	// �迭�� ������
	int data[3] = { 7,14,21 };
	int* pArr[3] = { &data[0],&data[1],&data[2] };
	int(*ptr)[3] = &data;

	cout << *pArr[1] << endl;
	cout << (*ptr)[2] << endl;

	// ����
	// 14
	// 21

	
	// �迭�� ������ ����
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

	
	// 2���� �迭�� ������
	int arr[2][3] = { {11,12,13},{21,22,23} };
	int(*pp)[3] = arr;

	cout << pp[1][2] << endl;
	cout << *(*(pp+1)+1) << endl;
	cout << *pp[1] << endl;
	cout << (*pp)[1] << endl;

	// ����
	// 23
	// 22
	// 21
	// 12

	// 2���� �迭�� ������ ����
	// ����
	// void print(int m[][4], int rows, int cols)
	// or
	// void print(int (*m)[4], int rows, int cols)
}