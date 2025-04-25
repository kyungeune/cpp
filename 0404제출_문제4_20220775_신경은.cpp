// 4-1 문제
#include <iostream>
using namespace std;

int main() {
    int which;
    int a = 10;
    int b = 4;
    double rslt = 0;

    cout << "어떤 연산을 원하는지 번호를 입력하세요 : ";
    cin >> which;
    cout << "입력된 두 수 : " << a << ", " << b << endl;

    if (which == 1) {
        rslt = a + b;
    }
    else if (which == 2) {
        rslt = a - b;
    }
    else if (which == 3) {
        rslt = a * b;
    }
    else if (which == 4) {
        rslt = (double)a / b;
    }
    else {
        cout << "잘못된 연산 번호입니다." << endl;
    }

    if (which >= 1 && which <= 4)
        cout << "연산 번호 " << which << "의 결과 : " << rslt << endl;

    return 0;
}

// 4-2 문제
#include <iostream>
using namespace std;

void get_which(int* which) {
    do {
        cout << "어떤 연산을 원하는지 번호를 입력하세요 : ";
        cin >> *which;

        if (*which < 1 || *which > 4) {
            cout << "연산 번호를 잘못 입력하였습니다." << endl;
        }

    } while (*which < 1 || *which > 4);
}

double cal_which(int a, int b, int which) {
    if (which == 1) {
        return a + b;
    }
    else if (which == 2) {
        return a - b;
    }
    else if (which == 3) {
        return a * b;
    }
    else return (double)a / b;
}

int main() {
    int a = 10;
    int b = 4;
    int which;
    double rslt = 0;

    get_which(&which);
    cout << "입력된 두 수 : " << a << ", " << b << endl;

    rslt = cal_which(a, b, which);
    cout << "연산 번호 " << which << "의 결과 : " << rslt << endl;

    return 0;
}
// 4-3 문제
#include <iostream>
using namespace std;

void get_which(int* which) {
    do {
        cout << "어떤 연산을 원하는지 번호를 입력하세요 : ";
        cin >> *which;

        if (*which < 1 || *which > 4)
            cout << "연산 번호를 잘못 입력하였습니다." << endl;

    } while (*which < 1 || *which > 4);
}

double cal_which(int a, int b, int which) {
    switch (which) {
    case 1: {
        return a + b;
    }
    case 2: {
        return a - b;
    }
    case 3: {
        return a * b;
    }
    case 4: {
        return (double)a / b;
    }
    default: {
        return 0;
    }

    }
}

int main() {
    int a = 10;
    int b = 4;
    int which;
    double rslt = 0;

    get_which(&which);
    cout << "입력된 두 수 : " << a << ", " << b << endl;

    rslt = cal_which(a, b, which);
    cout << "연산 번호 " << which << "의 결과 : " << rslt << endl;

    return 0;
}


// 4-4 문제
#include <iostream>
using namespace std;

void get_which(int* which) {
    do {
        cout << "어떤 연산을 원하는지 번호를 입력하세요 : ";
        cin >> *which;

        if (*which < 1 || *which > 4)
            cout << "연산 번호를 잘못 입력하였습니다." << endl;

    } while (*which < 1 || *which > 4);
}

void get_ab(int* a, int* b) {
    do {
        cout << "양수 a, b를 입력하세요 : ";
        cin >> *a >> *b;

        if (*a <= 0) {
            cout << "a가 음수입니다." << endl;
        }
        if (*b <= 0) {
            cout << "b가 음수입니다." << endl;
        }

    } while (*a <= 0 || *b <= 0);
}

double cal_which(int a, int b, int which) {
    switch (which) {
    case 1: {
        return a + b;
    }
    case 2: {
        return a - b;
    }
    case 3: {
        return a * b;
    }
    case 4: {
        return (double)a / b;
    }
    default: {
        return 0;
    }

    }
}

int main() {
    int a;
    int b;
    int which;
    double rslt = 0;

    get_which(&which);
    get_ab(&a, &b);

    cout << "입력된 두 수 : " << a << ", " << b << endl;

    rslt = cal_which(a, b, which);
    cout << "연산 번호 " << which << "의 결과 : " << rslt << endl;

    return 0;
}
