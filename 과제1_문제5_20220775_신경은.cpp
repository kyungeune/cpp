//  5-1��
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score[5] = { 80, 61, 75, 45, 93 };
    int sum = 0;  // �������� �� int�̹Ƿ� �ϴ� int�� ���ϱ�

    for (int i = 0; i < 5; i++) {
        sum += score[i];
    }

    cout << "5���� �л� ���� ��� : " << (double)sum / 5 << endl;  // (double)�� ���� ����ȯ �Ͽ� double�� ���
    return 0;
}


// 5-2��
#include <iostream>
#include <iomanip>
using namespace std;

double cal_avg(int* score) {
    int sum = 0; // �������� �� int�̹Ƿ� �ϴ� int�� ���ϱ�

    for (int i = 0; i < 5; i++)
        sum += *(score + i);  // (�ּ�)�� �����ٿ� �װ� ����Ű�� ���� ��Ÿ����

    return (double)sum / 5;
}

int main() {
    int score[5] = { 80, 61, 75, 45, 93 };

    cout << "5���� �л� ���� ��� : " << cal_avg(score) << endl;

    return 0;
}


 5-3��
#include <iostream>
#include <iomanip>
using namespace std;

void get_score(int* score) {
    for (int i = 0; i < 5; i++) {
        int s;  // �ż��� �Է¹��� score ����
        do {  // ù��°�� ������ ����
            cout << i + 1 << "��° �л��� ������ �����ϼ��� : ";
            cin >> s;

            if (s < 0 || s > 100)
                cout << i + 1 << "��° �л��� ������ �ٽ� �����ϼ���. " << endl;

        } while (s < 0 || s > 100);

        *(score + i) = s; // (�ּ�)�� �����ٿ� �ű⿡ ���� ����
    }
}

double cal_avg(int* score) {
    int sum = 0; // �������� �� int�̹Ƿ� �ϴ� int�� ���ϱ�

    for (int i = 0; i < 5; i++)
        sum += *(score + i);  // (�ּ�)�� �����ٿ� �װ� ����Ű�� ���� ��Ÿ����

    return (double)sum / 5;
}

int main() {
    int score[5];

    get_score(score);

    cout << "5���� �л� ���� ��� : " << cal_avg(score) << endl;

    return 0;
}


 5-4��
#include <iostream>
#include <iomanip>
using namespace std;
void get_score(int* score) {
    for (int i = 0; i < 5; i++) {
        int s;  // �ż��� �Է¹��� score ����
        do {  // ù��°�� ������ ����
            cout << i + 1 << "��° �л��� ������ �����ϼ��� : ";
            cin >> s;

            if (s < 0 || s > 100)
                cout << i + 1 << "��° �л��� ������ �ٽ� �����ϼ���. " << endl;

        } while (s < 0 || s > 100);

        *(score + i) = s; // (�ּ�)�� �����ٿ� �ű⿡ ���� ����
    }
}
double cal_avg(int* score) {
    int sum = 0; // �������� �� int�̹Ƿ� �ϴ� int�� ���ϱ�

    for (int i = 0; i < 5; i++)
        sum += *(score + i);  // (�ּ�)�� �����ٿ� �װ� ����Ű�� ���� ��Ÿ����

    return (double)sum / 5;
}
int cal_max(int* score) {
    int max = *score;

    for (int i = 1; i < 5; i++)
        if (*(score + i) > max)  // �ϳ��ϳ� ������� ���ư���
            max = *(score + i);  // ���� ū �� ����

    return max;
}
int cal_min(int* score) {
    int min = *score;

    for (int i = 1; i < 5; i++)  
        if (*(score + i) < min) // �ϳ��ϳ� ������� ���ư���
            min = *(score + i); // ���� ���� �� ����

    return min;
}
int main() {
    int score[5];
    get_score(score);

    cout << "5���� �л� ���� ��� : " << cal_avg(score) << endl;
    cout << "5���� �л� ���� �ְ� : " << cal_max(score) << endl;
    cout << "5���� �л� ���� ���� : " << cal_min(score) << endl;

    return 0;
}
