// 2-1�� ����
#include <iostream>
using namespace std;
int main() {
    // ���� ����
    int a = 3;
    int b = 5;
    int sum = 0;

    sum = a + b;  // �հ� ���ϱ�

    if (sum % 2 == 0)  // 2�� ���� �������� 0�� ���, �� sum�� ¦���� ���
        cout << "a + b�� ¦���Դϴ�." << endl;
    else  // ������ ��� = sum�� Ȧ���� ���
        cout << "a + b�� Ȧ���Դϴ�." << endl;

    return 0;
//}


// 2-2�� ����
#include <iostream>
#include <cmath>  // ���� �Լ� abs()�� Ȱ���ϱ� ���� �ҷ�����
using namespace std;

int main() {
    int a = 0;  // �ʱⰪ ����
    int b = 0;
    int sum = 0;

    // �Է¹ޱ�
    cout << "a�� b�� ���� �Է��ϼ��� : ";
    cin >> a >> b;

    sum = abs(a + b);  // ������ ��쵵 �ֱ⿡ ���� ó���ϱ�

    switch (sum) {  // sum�� ���� ������
    case 0:
        cout << "a + b�� 0�Դϴ�." << endl;
        break;  // break�� ���� ������ ���� ��쵵 �����
    default:
        if (sum % 2 == 0)
            cout << "a + b�� ¦���Դϴ�." << endl;
        else
            cout << "a + b�� Ȧ���Դϴ�." << endl;
        break;
    }

    return 0;
}


// 2-3�� ����
#include <iostream>
#include <cmath>  // ���� �Լ��� ����ϱ� ���� �ҷ�����
using namespace std;

void get_ab(int* a, int* b) {  // a�� b�� ���� �Է¹޴� �Լ�
    cout << "a�� b�� ���� �Է��ϼ��� : ";
    cin >> *a >> *b;  // �Է¹޾Ƽ� a�� b�� ����Ű��(*) ���� �����ض�
}
void print_even(int sum) {  // ��¿� �Լ�
    int fixed_sum = abs(sum);

    if (fixed_sum == 0)
        cout << "a + b�� 0�Դϴ�." << endl;
    else if (sum % 2 != 0)  // ¦���� �ƴϸ�
        cout << "a + b�� Ȧ���Դϴ�." << endl;
    else  // ������ (Ȧ��)
        cout << "a + b�� ¦���Դϴ�." << endl;
}
int main() {
    // ���� ���� �� �ʱ�ȭ
    int a = 0;
    int b = 0;

    get_ab(&a, &b);  // �ּ� ���� ��������� �Լ����� �ٲ� ���� �ݿ���

    int sum = a + b;

    print_even(sum);

    return 0;
}


// 2-4�� ����
#include <iostream>
#include <cmath>  // ���� �Լ��� ����ϱ� ���� �ҷ�����
using namespace std;

void get_ab(int* a, int* b) {  // a�� b�� ���� �Է¹޴� �Լ�
    cout << "a�� b�� ���� �Է��ϼ��� : ";
    cin >> *a >> *b;  // �Է¹޾Ƽ� a�� b�� ����Ű��(*) ���� �����ض�
}
void print_even(int sum, int num) {  // num���� ��ȣ����ϴ� �� �߰�
    int fixed_sum = abs(sum);

    if (num == 1 ? cout << "a + " : cout << "a - ");  // ��ȣ�� ���� ó�� ��µǴ� ���� �ٸ�

    if (fixed_sum == 0)
        cout << " b�� 0�Դϴ�." << endl;
    else if (sum % 2 != 0)  // ¦���� �ƴϸ�
        cout << " b�� Ȧ���Դϴ�." << endl;
    else  // ������ (Ȧ��)
        cout << " b�� ¦���Դϴ�." << endl;
}
int cal_res(int a, int b, int num) { // ���� ó���� print_even()���� �������� ���� ����
    return(num == 1) ? a + b : a - b;
}
int main() {
    // ���� ���� �� �ʱ�ȭ
    int a = 0;
    int b = 0;
    int num = 0;

    get_ab(&a, &b);  // �ּ� ���� ��������� �Լ����� �ٲ� ���� �ݿ���

    cout << "a�� b�� ���� ���ϰ� ������ 1��, ���� ���ϰ� ������ 2�� �Է��ϼ��� : ";
    cin >> num;

    if (num != 1 && num != 2) {  // �߸��� ���� ����ó��
        return 0;
    }

    int sum = a + b;

    print_even(sum, num);

    return 0;
}

// 2-5�� ����
#include <iostream>
#include <cmath>  // ���� �Լ��� ����ϱ� ���� �ҷ�����
using namespace std;

void get_ab(int* a, int* b) {  // a�� b�� ���� �Է¹޴� �Լ�
    cout << "a�� b�� ���� �Է��ϼ��� : ";
    cin >> *a >> *b;  // �Է¹޾Ƽ� a�� b�� ����Ű��(*) ���� �����ض�
}
void print_even(int sum, int num) {  // num���� ��ȣ����ϴ� �� �߰�
    int fixed_sum = abs(sum);

    if (num == 1 ? cout << "a + " : cout << "a - ");  // ��ȣ�� ���� ó�� ��µǴ� ���� �ٸ�

    if (fixed_sum == 0)
        cout << " b�� 0�Դϴ�." << endl;
    else if (sum % 2 != 0)  // ¦���� �ƴϸ�
        cout << " b�� Ȧ���Դϴ�." << endl;
    else  // ������ (Ȧ��)
        cout << " b�� ¦���Դϴ�." << endl;
}
int cal_res(int a, int b, int num) { // ���� ó���� print_even()���� �������� ���� ����
    return(num == 1) ? a + b : a - b;
}
int main() {
    // ���� ���� �� �ʱ�ȭ
    int a = 0;
    int b = 0;
    int num = 0;

    get_ab(&a, &b);  // �ּ� ���� ��������� �Լ����� �ٲ� ���� �ݿ���

    do {  // ó�� �� ���� ������ �����ϱ� ���ؼ�
        cout << "a�� b�� ���� ���ϰ� ������ 1��, ���� ���ϰ� ������ 2�� �Է��ϼ��� : ";
        cin >> num;
        if (num != 1 && num != 2) {
            cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
        }
    } while (num != 1 && num != 2);

    int sum = a + b;

    print_even(sum, num);

    return 0;
}