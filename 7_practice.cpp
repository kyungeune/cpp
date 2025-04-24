#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
#include <string>

using namespace std;

void main()
{
	// 6-1. � ���� ��¥ ���� �迭�� ����ؼ� ����ϴ� ���α׷��� ����ÿ�.
	int month = 0;
	int arr[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	// int* p = arr;  // �Ʒ��� ����
	int* p = &arr[0];
	// int* p = &arr;  // �������� �ڵ�

	do {
		cout << "���� �Է����ּ���. (1~12) : ";
		cin >> month;
	} while (month > 12 || month < 1);

	cout << "�ش� ������ " << p[month-1] << "���� ���� �ֽ��ϴ�." << endl;




	// 6-2. 1���� 50 ������ ������ ���� 10���� ��ҷ� ���� �迭�� �����, �̷��� �迭���� �ּڰ��� �ִ��� ���� ����ϴ� ���α׷��� ���弼��.
	const int size = 10;
	int arr[size];

	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (50) + 1;  // 1~50 ���� ������ ���� ����
	}

	int max = 0;
	int min = 51;
	cout << "�迭 ��� ��� : " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	cout << "\n�ִ��� " << max << "�̰�, �ּڰ��� " << min << "�Դϴ�." << endl;




	// 6-3. �־��� 2���� �迭�� ���� row ���� Ȥ�� col �������� �д� ���α׷��� �ۼ��Ͻÿ�
	string w;
	int arr[2][3] = {{1,4,6},{3,5,1}};
	int* p = &arr[0][0];

	cout << "� �������� ���� ������ �����Ͻʽÿ�. (row or col):";
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