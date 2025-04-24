#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
// ����
int main()	
{
	int b = 1; 
	cout << b++ + b++ << endl;  // 2

	int x = 1;
	int y = 2;
	int& z = x;
	cout << x << " " << y << " " << z;  // 1 2 1
}

// ���ϰ��� �ִ� �Լ�
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

void Mod(int, int);  // ���������� �߰�����!
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



// �Լ� ����
void Increment(int* pArg)
{
	(*pArg)++;
}
void main()
{
	int i = 3;
	Increment(&i);  // �ּҰ��� ������
	cout << i << endl;  // 4
}


// ���� ����
void Increment(int& arg)  // ���⼭ �ּҸ� ���!
{
	arg++;
}
void main()
{
	int i = 3;
	Increment(i);
	cout << i << endl;
}




// �⺻ ����
int Increment(int arg, int delta = 1)
{
	return arg + delta;
}
void main()
{
	cout << Increment(3) << endl;  // 4  
	cout << Increment(3, 2) << endl;  // 5
}




// �Լ� ����
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

	cout << "����: " << result << endl;
//}



// �Լ� �ߺ� ���� : ���� �̸��� �Լ��� ���� �� ���ǵǴ� ��
// �Լ� �̸��� ���� ��, ���� Ÿ�Կ��� ���� �ٸ� ���
void Func(int arg){}
void Func(double arg){}

// �Լ� �ߺ� ���� (Overloading)
int Func(int arg) { return arg; }
double Func(int arg) { return (double)arg; }  // error
void main() { Func(1); }



// �Լ� �ߺ� ���� (Overloading)�� ������
// TYPE�� const TYPE�� ���� Ÿ������ ��޵�
void Func(int arg) {}
void Func(const int arg) {} // error

// �Ʒ��� ��
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