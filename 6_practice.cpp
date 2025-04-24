#include <iostream>
#include <string>
using namespace std;  // stdin�� �ƴ϶� std��!!!!!!!!!!!!

// �ǽ� 1
struct Robot {
	string name;
	int height;
	int weight;
	int power;
};

struct Avg {
	int height;
	int weight;
	int power;
};

Avg cal_avg(Robot s[])  // �迭 ���·� �޾ƾ� ��
{
	Avg avg = {0,0,0};  // �ʱ�ȭ (�� �ص� ������ X)

	for (int i = 0; i < 4; i++) {
		avg.height += s[i].height;
		avg.weight += s[i].weight;
		avg.power += s[i].power;
	}

	avg.height /= 4;
	avg.weight /= 4;
	avg.power /= 4;

	return avg;
}

void print_avg(Avg a) {
    cout << "�κ����� ��� ������ " << a.height << "m�Դϴ�." << endl;
    cout << "�κ����� ��� ���Դ� " << a.weight << "T�Դϴ�." << endl;
    cout << "�κ����� ��� ������ " << a.power << "�����Դϴ�." << endl;
}

int main()
{
	Robot robot[4] =
	{
		{"�±Ǻ���", 18, 80, 3000},
		{"��¡��", 17, 70, 2500},
		{"��ĭ������",20,90,3500},
		{"�׷�������", 22, 100, 5000}
	};

	Avg avg = cal_avg(robot);
	print_avg(avg);

	return 0;
}


// �ǽ� 2
struct Score {
    int kor;
    int eng;
    int math;
    int sci;
};
struct Student {
    string name;
    string major;
    Score s;
};
struct Avg {  // �ʱ�ȭ �߿���!
    double kor = 0;
    double eng = 0;
    double math = 0;
    double sci = 0;
};

void print_eng(Student students[]) {
    cout << "���� ���񿡼� 70�� �̻� ���� �л� : ";

    for (int i = 0; i < 5; i++) {
        if (students[i].s.eng >= 70) {
            cout << students[i].name << " ";
        }
    }

    cout << endl;
}

void get_math(Student students[], Avg* avg) {  // �� ������ ��� ������ ���ϱ�
    int number = 0;  // �ش�Ǵ� �ο���
    cout << endl;

    for (int i = 0; i < 5; i++) {
        if (students[i].major == "Math") {
            avg->kor += students[i].s.kor;
            avg->eng += students[i].s.eng;
            avg->math += students[i].s.math;
            avg->sci += students[i].s.sci;
            number++;
        }
    }

    avg->kor /= number;
    avg->eng /= number;
    avg->math /= number;
    avg->sci /= number;
}

void print_math(Avg avg) {  // ���� ������ ���
    cout << "��� ���� ������ " << avg.kor << "���Դϴ�." << endl;
    cout << "��� ���� ������ " << avg.eng << "���Դϴ�." << endl;
    cout << "��� ���� ������ " << avg.math << "���Դϴ�." << endl;
    cout << "��� ���� ������ " << avg.sci << "���Դϴ�." << endl;
}

int main()
{
    Student students[5] = {
        {"Jack", "English", {80, 96,     42, 95}},
        {"Amy", "Korean", {98, 83, 71, 36}},
        {"Peter", "Math", {53, 48, 98, 100}},
        {"Helen", "Math", {78, 65, 85, 57}},
        {"June", "Math", {77, 95, 65, 45}}
    };

    print_eng(students);

    Avg math_avg;
    get_math(students, &math_avg);

    print_math(math_avg);

    return 0;
}

