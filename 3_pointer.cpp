#include <iostream>
using namespace std;

void main() {
	int a;
	int* p = &a;

	*p = 1;

	cout << "a: " << a << "\n p: " << p << "\n *p: " << *p << endl;


	int a = 3;
	int* p1, p2, * p3;  // * 연산자는 개별적으로 사용되어야 함
	
	p1 = &a;
	p2 = &a; // error
	p3 = &a;


	// 포인터의 사용 예시
	int score = 92;
	int* pScore = &score;
	score = 80;
	*pScore = 70;

	cout << "score: " << score << "\n*pScore: " << *pScore << endl;


	char c;
	int i;

	// 같은 타입을 저장해야.
	char* pC = &i;  // error
	char* pC = &c;  // OK


	// 포인터 연산자
	char* pC = NULL;
	int* pI = NULL;
	double* pD = NULL;

	cout << (void*)(pC + 1) << endl;  // 1
	cout << (void*)(pI + 1) << endl;  // 4
	cout << (void*)(pD + 1) << endl;  // 8


	// 증감(++,--) 연산자
	double* tmp = NULL;
	cout << tmp << endl;

	tmp++;
	cout << tmp << endl;

	tmp--;
	cout << tmp << endl;


	// 산술, 증감 연산자 예시
	int arr[5] = { 10,11,12,13,14 };
	int* ptr = &arr[2];

	ptr += 3;
	cout << ptr << endl;

	ptr--;
	cout << ptr << endl;

	ptr -= 3;
	cout << *ptr << endl;
	cout << &(*ptr) << endl;


	// 이중 포인터
	int num1 = 10;
	int* numPtr1 = &num1;
	int** numPtr2 = &numPtr1;

	// 이중 포인터 예시 1
	int a;
	int* p = &a;
	int** pp = &p;

	**pp = 3;
	cout << a << endl;


	// 이중 포인터 예시 2
	int num[5] = { 10,11,12,13,14 };
	int* numPtr1 = &num[0];
	int** numPtr2 = &numPtr1;

	// Q1
	num[0] += 3;
	cout << **numPtr2 << endl;

	// Q2
	*numPtr1 += 5;
	cout << num[2] << endl;

	// Q3
	numPtr1 += 3;
	cout << *numPtr2 << endl;

	// Q4
	*numPtr2 -= 2;
	cout << *(&numPtr1) << endl;


	// 참조 타입
	int a;
	 int& ra = a;  // ra의 타입이 int&인 것, 즉 a가 나타내는 영역에 새로운 이름 ra가 생긴 것
	 
	 ra = 1;
	cout << a << endl;
	 
	 int& ra;  // error
	const int& ra = 1;
	int* p = (int*)&ra;
	*p = 2;
	cout << ra << endl;


	// 참조 타입 예시
	int a = 10;
	int* p = &a;
	int& ra = a;

	// Q1
	*p += 3;
	cout << a << endl;

	// Q2
	a += 10;
	cout << ra << endl;

	// Q3
	p += 3;
	cout << *(&ra) << endl;

}