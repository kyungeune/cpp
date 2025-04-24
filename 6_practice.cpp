#include <iostream>
#include <string>
using namespace std;  // stdin이 아니라 std임!!!!!!!!!!!!

// 실습 1
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

Avg cal_avg(Robot s[])  // 배열 형태로 받아야 함
{
	Avg avg = {0,0,0};  // 초기화 (안 해도 에러는 X)

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
    cout << "로봇들의 평균 신장은 " << a.height << "m입니다." << endl;
    cout << "로봇들의 평균 무게는 " << a.weight << "T입니다." << endl;
    cout << "로봇들의 평균 마력은 " << a.power << "마력입니다." << endl;
}

int main()
{
	Robot robot[4] =
	{
		{"태권브이", 18, 80, 3000},
		{"마징가", 17, 70, 2500},
		{"메칸더브이",20,90,3500},
		{"그랜다이져", 22, 100, 5000}
	};

	Avg avg = cal_avg(robot);
	print_avg(avg);

	return 0;
}


// 실습 2
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
struct Avg {  // 초기화 중요함!
    double kor = 0;
    double eng = 0;
    double math = 0;
    double sci = 0;
};

void print_eng(Student students[]) {
    cout << "영어 과목에서 70점 이상 받은 학생 : ";

    for (int i = 0; i < 5; i++) {
        if (students[i].s.eng >= 70) {
            cout << students[i].name << " ";
        }
    }

    cout << endl;
}

void get_math(Student students[], Avg* avg) {  // 각 과목의 평균 점수를 구하기
    int number = 0;  // 해당되는 인원수
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

void print_math(Avg avg) {  // 위의 내용을 출력
    cout << "평균 국어 점수는 " << avg.kor << "점입니다." << endl;
    cout << "평균 영어 점수는 " << avg.eng << "점입니다." << endl;
    cout << "평균 수학 점수는 " << avg.math << "점입니다." << endl;
    cout << "평균 과학 점수는 " << avg.sci << "점입니다." << endl;
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

