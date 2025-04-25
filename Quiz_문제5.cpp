//  5-1번
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int score[5] = { 80, 61, 75, 45, 93 };
    int sum = 0;  // 점수들이 다 int이므로 일단 int로 더하기

    for (int i = 0; i < 5; i++) {
        sum += score[i];
    }

    cout << "5명의 학생 점수 평균 : " << (double)sum / 5 << endl;  // (double)로 강제 형변환 하여 double로 출력
    return 0;
}


// 5-2번
#include <iostream>
#include <iomanip>
using namespace std;

double cal_avg(int* score) {
    int sum = 0; // 점수들이 다 int이므로 일단 int로 더하기

    for (int i = 0; i < 5; i++)
        sum += *(score + i);  // (주소)에 별을붙여 그게 가리키는 값을 나타내기

    return (double)sum / 5;
}

int main() {
    int score[5] = { 80, 61, 75, 45, 93 };

    cout << "5명의 학생 점수 평균 : " << cal_avg(score) << endl;

    return 0;
}


 5-3번
#include <iostream>
#include <iomanip>
using namespace std;

void get_score(int* score) {
    for (int i = 0; i < 5; i++) {
        int s;  // 매순간 입력받을 score 저장
        do {  // 첫번째는 무조건 실행
            cout << i + 1 << "번째 학생의 점수를 기입하세요 : ";
            cin >> s;

            if (s < 0 || s > 100)
                cout << i + 1 << "번째 학생의 점수를 다시 기입하세요. " << endl;

        } while (s < 0 || s > 100);

        *(score + i) = s; // (주소)에 별을붙여 거기에 값을 저장
    }
}

double cal_avg(int* score) {
    int sum = 0; // 점수들이 다 int이므로 일단 int로 더하기

    for (int i = 0; i < 5; i++)
        sum += *(score + i);  // (주소)에 별을붙여 그게 가리키는 값을 나타내기

    return (double)sum / 5;
}

int main() {
    int score[5];

    get_score(score);

    cout << "5명의 학생 점수 평균 : " << cal_avg(score) << endl;

    return 0;
}


 5-4번
#include <iostream>
#include <iomanip>
using namespace std;
void get_score(int* score) {
    for (int i = 0; i < 5; i++) {
        int s;  // 매순간 입력받을 score 저장
        do {  // 첫번째는 무조건 실행
            cout << i + 1 << "번째 학생의 점수를 기입하세요 : ";
            cin >> s;

            if (s < 0 || s > 100)
                cout << i + 1 << "번째 학생의 점수를 다시 기입하세요. " << endl;

        } while (s < 0 || s > 100);

        *(score + i) = s; // (주소)에 별을붙여 거기에 값을 저장
    }
}
double cal_avg(int* score) {
    int sum = 0; // 점수들이 다 int이므로 일단 int로 더하기

    for (int i = 0; i < 5; i++)
        sum += *(score + i);  // (주소)에 별을붙여 그게 가리키는 값을 나타내기

    return (double)sum / 5;
}
int cal_max(int* score) {
    int max = *score;

    for (int i = 1; i < 5; i++)
        if (*(score + i) > max)  // 하나하나 순서대로 돌아가며
            max = *(score + i);  // 가장 큰 값 저장

    return max;
}
int cal_min(int* score) {
    int min = *score;

    for (int i = 1; i < 5; i++)  
        if (*(score + i) < min) // 하나하나 순서대로 돌아가며
            min = *(score + i); // 가장 작은 값 저장

    return min;
}
int main() {
    int score[5];
    get_score(score);

    cout << "5명의 학생 점수 평균 : " << cal_avg(score) << endl;
    cout << "5명의 학생 점수 최고 : " << cal_max(score) << endl;
    cout << "5명의 학생 점수 최저 : " << cal_min(score) << endl;

    return 0;
}
