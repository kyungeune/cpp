#include <iostream>
using namespace std;

int main() {
	// �ǽ� 3-1
	int arr[5] = { 10,20,30,40,50 };

	cout << "���� �迭��" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	cout << "\n�迭 �Ųٷ� ���" << endl;
	for (int i = 4; i >= 0; i--) {
		cout << arr[i] << " ";
	}



	// �ǽ� 3-2
	int a, b;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> a >> b;
	cout << "�� ���� �ٽ� ����մϴ� : ";

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


	// �ǽ� 3-3
	// for�� ���
	
	int sample[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0;i < 10;i++) {
		if(sample[i]%2==0)
			cout << sample[i] << endl;
	}

	// while���� ������ ���
	int sample[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr = sample;  // *ptr�� ������
	int cnt = 1;  // *ptr�� ���� ���Ŀ��� ������ ���� ���� ����!
	while (cnt <= 10) {
		if (*ptr % 2 == 0) {
			cout << *ptr << endl;
		}
		ptr++;
		cnt++;
	}



	// �ǽ� 3-4
	int num;

	cout << "������ �ƴ� ������ �Է��ϼ���: ";
	cin >> num;

	// 0�� ���ܷ� ���� ó��
	if (num == 0) {
		cout << "���� ���� ����: 0" << endl;
		return 0;
	}

	// ���� ���� �ڸ� ���ڸ� ã��
	do {
		num = num / 10;
	} while (num >= 10);

	cout << "���� ���� ����: " << num << endl;


	return 0;
}