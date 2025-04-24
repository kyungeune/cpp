#include <iostream>
using namespace std;
void Print(int arr[], int size) {  // 4-1
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void Reverse(int arr[], int size) {  // 4-2
	for (int i = 0; i < size / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}
void Sort(int arr[], int size) {  // 4-3
	for (int i = 0; i < size; i++) {

	}
}
void Absolute(int& x) {  // 4-4
	if (x < 0)
		x = -x;
}
double Calculate(int x) {  // 4-5
	double result;

	result = x * 180.0 / 100.0 + 32;

	return result;
}
int getScore() {  // 4-6
	int x;
	cout << "정수를 입력하세요(0-100): ";
	cin >> x;
	return x;
}
char findGrade(int score) {  // 4-6
	if (score >= 90)
		return 'A';
	else if (score >= 80)
		return 'B';
	else if (score >= 70)
		return 'C';
	else if (score >= 60)
		return 'D';
	else
		return 'F';
}
void printResult(int score, char grade) {  // 4-6
	cout << "시험 결과" << endl;
	cout << "점수 : " << score << "/100" << endl;
	cout << "등급 : " << grade << endl;
}


int main() {
	// 실습 4-1, 4-2
	const int size = 7;
	int arr[10] = { 1,2,3,4,5,6,7 };
	Print(arr, size);
	Reverse(arr, size);
	Print(arr, size);


	// 실습 4-3
	const int size = 7;
	int arr[10] = { 7,1,3,5,6,2,4 };
	Sort(arr, size);
	Print(arr, size);


	// 실습 4-4
	int a = 3;
	int b = -5;
	Absolute(a);
	Absolute(b);
	cout << a << endl;
	cout << b << endl;


	// 실습 4-5
	double x;
	cin >> x;
	cout << Calculate(x) << endl;


	// 실습 4-6
	int score;
	char grade = '\0';

	score = getScore();
	grade = findGrade(score);
	printResult(score, grade);
}