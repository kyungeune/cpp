// 1-1 ����
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (i + 1);
    }

    cout << "1���� n������ �� : " << sum << endl;

    return 0;
}

// 1-2 ����
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;

    cout << "���� n�� �Է��ϼ��� : ";
    cin >> n;

    if (n <= 0) {
        cout << "�߸��� �Է��Դϴ�." << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << "1���� n������ �� : " << sum << endl;
    }

    return 0;
}

// 1-3 ����
#include <iostream>
using namespace std;

int main() {
    int x = -1;
    int sum = 0;

    while (x < 0) {
        cout << "���� n�� �Է��ϼ��� : ";
        cin >> x;
    }

    for (int i = 1; i <= x; i++) {
        sum += i;
    }

    cout << "1���� n������ �� : " << sum << endl;
    return 0;
}

// 1-4 ����
#include <iostream>
using namespace std;

int get_n() {
    int x = -1;

    while (x < 0) {
        cout << "���� n�� �Է��ϼ��� : ";
        cin >> x;
    }

    return x;
}

int cal_sum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n = 0;
    int sum = 0;

    n = get_n();
    sum = cal_sum(n);

    cout << "1���� n������ �� : " << sum << endl;
    return 0;
}

// 1-5 ����
#include <iostream>
using namespace std;

void get_n(int* x) {
    *x = -1;

    while (*x < 0) {
        cout << "���� n�� �Է��ϼ��� : ";
        cin >> *x;
    }
}

void cal_sum(int n, int* sum) {
    *sum = 0;

    for (int i = 1; i <= n; i++) {
        *sum += i;
    }
}

int main() {
    int n = 0;
    int sum = 0;

    get_n(&n);
    cal_sum(n, &sum);

    cout << "1���� n������ �� : " << sum << endl;
    return 0;
}

