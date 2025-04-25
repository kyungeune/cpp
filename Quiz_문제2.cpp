// 2-1번 문제
#include <iostream>
using namespace std;
int main() {
    // 변수 선언
    int a = 3;
    int b = 5;
    int sum = 0;

    sum = a + b;  // 합계 구하기

    if (sum % 2 == 0)  // 2로 나눈 나머지가 0일 경우, 즉 sum이 짝수일 경우
        cout << "a + b는 짝수입니다." << endl;
    else  // 나머지 경우 = sum이 홀수인 경우
        cout << "a + b는 홀수입니다." << endl;

    return 0;
//}


// 2-2번 문제
#include <iostream>
#include <cmath>  // 절댓값 함수 abs()를 활용하기 위해 불러오기
using namespace std;

int main() {
    int a = 0;  // 초기값 선언
    int b = 0;
    int sum = 0;

    // 입력받기
    cout << "a와 b의 값을 입력하세요 : ";
    cin >> a >> b;

    sum = abs(a + b);  // 음수일 경우도 있기에 절댓값 처리하기

    switch (sum) {  // sum의 값을 따지기
    case 0:
        cout << "a + b는 0입니다." << endl;
        break;  // break를 쓰지 않으면 다음 경우도 실행됨
    default:
        if (sum % 2 == 0)
            cout << "a + b는 짝수입니다." << endl;
        else
            cout << "a + b는 홀수입니다." << endl;
        break;
    }

    return 0;
}


// 2-3번 문제
#include <iostream>
#include <cmath>  // 절댓값 함수를 사용하기 위해 불러오기
using namespace std;

void get_ab(int* a, int* b) {  // a와 b의 값을 입력받는 함수
    cout << "a와 b의 값을 입력하세요 : ";
    cin >> *a >> *b;  // 입력받아서 a와 b가 가르키는(*) 곳에 저장해라
}
void print_even(int sum) {  // 출력용 함수
    int fixed_sum = abs(sum);

    if (fixed_sum == 0)
        cout << "a + b는 0입니다." << endl;
    else if (sum % 2 != 0)  // 짝수가 아니면
        cout << "a + b는 홀수입니다." << endl;
    else  // 나머지 (홀수)
        cout << "a + b는 짝수입니다." << endl;
}
int main() {
    // 변수 생성 및 초기화
    int a = 0;
    int b = 0;

    get_ab(&a, &b);  // 주소 값을 전달해줘야 함수에서 바꾼 값이 반영됨

    int sum = a + b;

    print_even(sum);

    return 0;
}


// 2-4번 문제
#include <iostream>
#include <cmath>  // 절댓값 함수를 사용하기 위해 불러오기
using namespace std;

void get_ab(int* a, int* b) {  // a와 b의 값을 입력받는 함수
    cout << "a와 b의 값을 입력하세요 : ";
    cin >> *a >> *b;  // 입력받아서 a와 b가 가르키는(*) 곳에 저장해라
}
void print_even(int sum, int num) {  // num으로 부호출력하는 것 추가
    int fixed_sum = abs(sum);

    if (num == 1 ? cout << "a + " : cout << "a - ");  // 부호에 따라 처음 출력되는 값이 다름

    if (fixed_sum == 0)
        cout << " b는 0입니다." << endl;
    else if (sum % 2 != 0)  // 짝수가 아니면
        cout << " b는 홀수입니다." << endl;
    else  // 나머지 (홀수)
        cout << " b는 짝수입니다." << endl;
}
int cal_res(int a, int b, int num) { // 절댓값 처리는 print_even()에서 해줌으로 값만 리턴
    return(num == 1) ? a + b : a - b;
}
int main() {
    // 변수 생성 및 초기화
    int a = 0;
    int b = 0;
    int num = 0;

    get_ab(&a, &b);  // 주소 값을 전달해줘야 함수에서 바꾼 값이 반영됨

    cout << "a와 b의 합은 구하고 싶으면 1을, 차를 구하고 싶으면 2를 입력하세요 : ";
    cin >> num;

    if (num != 1 && num != 2) {  // 잘못된 숫자 예외처리
        return 0;
    }

    int sum = a + b;

    print_even(sum, num);

    return 0;
}

// 2-5번 문제
#include <iostream>
#include <cmath>  // 절댓값 함수를 사용하기 위해 불러오기
using namespace std;

void get_ab(int* a, int* b) {  // a와 b의 값을 입력받는 함수
    cout << "a와 b의 값을 입력하세요 : ";
    cin >> *a >> *b;  // 입력받아서 a와 b가 가르키는(*) 곳에 저장해라
}
void print_even(int sum, int num) {  // num으로 부호출력하는 것 추가
    int fixed_sum = abs(sum);

    if (num == 1 ? cout << "a + " : cout << "a - ");  // 부호에 따라 처음 출력되는 값이 다름

    if (fixed_sum == 0)
        cout << " b는 0입니다." << endl;
    else if (sum % 2 != 0)  // 짝수가 아니면
        cout << " b는 홀수입니다." << endl;
    else  // 나머지 (홀수)
        cout << " b는 짝수입니다." << endl;
}
int cal_res(int a, int b, int num) { // 절댓값 처리는 print_even()에서 해줌으로 값만 리턴
    return(num == 1) ? a + b : a - b;
}
int main() {
    // 변수 생성 및 초기화
    int a = 0;
    int b = 0;
    int num = 0;

    get_ab(&a, &b);  // 주소 값을 전달해줘야 함수에서 바꾼 값이 반영됨

    do {  // 처음 한 번은 무조건 실행하기 위해서
        cout << "a와 b의 합은 구하고 싶으면 1을, 차를 구하고 싶으면 2를 입력하세요 : ";
        cin >> num;
        if (num != 1 && num != 2) {
            cout << "잘못 입력하셨습니다." << endl;
        }
    } while (num != 1 && num != 2);

    int sum = a + b;

    print_even(sum, num);

    return 0;
}
