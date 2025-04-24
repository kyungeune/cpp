#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
// 리뷰
int main()	
{
	int b = 1; 
	cout << b++ + b++ << endl;  // 2

	int x = 1;
	int y = 2;
	int& z = x;
	cout << x << " " << y << " " << z;  // 1 2 1
}

// 리턴값이 있는 함수
int Multiply(int a, int b)
{
	int res = a * b;
	return res;
	res = 0;
}
void main()
{
	int res = Multiply(3, 4);
	cout << res << endl;
}

void Mod(int, int);  // 순서때문에 추가해줌!
void Sub(int arg, int m)
{
	Mod(arg - m, m);
}
void Mod(int arg, int m)
{
	if (arg < m)
	{
		cout << arg << endl;
	}
	else {
		Sub(arg, m);
	}
}
void main() {
	Mod(11, 3);  // 2
}



// 함수 인자
void Increment(int* pArg)
{
	(*pArg)++;
}
void main()
{
	int i = 3;
	Increment(&i);  // 주소값을 던져줌
	cout << i << endl;  // 4
}


// 참조 전달
void Increment(int& arg)  // 여기서 주소를 사용!
{
	arg++;
}
void main()
{
	int i = 3;
	Increment(i);
	cout << i << endl;
}




// 기본 인자
int Increment(int arg, int delta = 1)
{
	return arg + delta;
}
void main()
{
	cout << Increment(3) << endl;  // 4  
	cout << Increment(3, 2) << endl;  // 5
}




// 함수 예시
int sum_int(int a,int b)
{
	int result = 0;

	for (int i = a; i <= b; i++) {
		result += i;
	}

	return result;
}
int main()
{
	int start = 1, end = 10;

	int result = sum_int(start,end);

	cout << "총합: " << result << endl;
//}



// 함수 중복 정의 : 같은 이름의 함수가 여러 개 정의되는 것
// 함수 이름만 같을 뿐, 인자 타입열은 서로 다른 경우
void Func(int arg){}
void Func(double arg){}

// 함수 중복 정의 (Overloading)
int Func(int arg) { return arg; }
double Func(int arg) { return (double)arg; }  // error
void main() { Func(1); }



// 함수 중복 정의 (Overloading)의 주의점
// TYPE과 const TYPE은 같은 타입으로 취급됨
void Func(int arg) {}
void Func(const int arg) {} // error

// 아래는 됨
void Func(int* arg) {}
void Func(const int* arg) {} // error


void main()
{
	cout << abs(2) << endl;  // 2
	cout << ceil(4.5) << endl;  // 5
	cout << floor(4.5) << endl;  // 4
	cout << pow(2,3) << endl;  // 8
	cout << sqrt(4) << endl; // 2
}


void main() {
	srand(time(0));
	int temp = rand();
	int num = temp % (100 - 20 + 1) + 20;
}