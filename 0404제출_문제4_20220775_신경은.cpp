// 4-1 ����
#include <iostream>
using namespace std;

int main() {
    int which;
    int a = 10;
    int b = 4;
    double rslt = 0;

    cout << "� ������ ���ϴ��� ��ȣ�� �Է��ϼ��� : ";
    cin >> which;
    cout << "�Էµ� �� �� : " << a << ", " << b << endl;

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
        cout << "�߸��� ���� ��ȣ�Դϴ�." << endl;
    }

    if (which >= 1 && which <= 4)
        cout << "���� ��ȣ " << which << "�� ��� : " << rslt << endl;

    return 0;
}

// 4-2 ����
#include <iostream>
using namespace std;

void get_which(int* which) {
    do {
        cout << "� ������ ���ϴ��� ��ȣ�� �Է��ϼ��� : ";
        cin >> *which;

        if (*which < 1 || *which > 4) {
            cout << "���� ��ȣ�� �߸� �Է��Ͽ����ϴ�." << endl;
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
    cout << "�Էµ� �� �� : " << a << ", " << b << endl;

    rslt = cal_which(a, b, which);
    cout << "���� ��ȣ " << which << "�� ��� : " << rslt << endl;

    return 0;
}
// 4-3 ����
#include <iostream>
using namespace std;

void get_which(int* which) {
    do {
        cout << "� ������ ���ϴ��� ��ȣ�� �Է��ϼ��� : ";
        cin >> *which;

        if (*which < 1 || *which > 4)
            cout << "���� ��ȣ�� �߸� �Է��Ͽ����ϴ�." << endl;

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
    cout << "�Էµ� �� �� : " << a << ", " << b << endl;

    rslt = cal_which(a, b, which);
    cout << "���� ��ȣ " << which << "�� ��� : " << rslt << endl;

    return 0;
}


// 4-4 ����
#include <iostream>
using namespace std;

void get_which(int* which) {
    do {
        cout << "� ������ ���ϴ��� ��ȣ�� �Է��ϼ��� : ";
        cin >> *which;

        if (*which < 1 || *which > 4)
            cout << "���� ��ȣ�� �߸� �Է��Ͽ����ϴ�." << endl;

    } while (*which < 1 || *which > 4);
}

void get_ab(int* a, int* b) {
    do {
        cout << "��� a, b�� �Է��ϼ��� : ";
        cin >> *a >> *b;

        if (*a <= 0) {
            cout << "a�� �����Դϴ�." << endl;
        }
        if (*b <= 0) {
            cout << "b�� �����Դϴ�." << endl;
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

    cout << "�Էµ� �� �� : " << a << ", " << b << endl;

    rslt = cal_which(a, b, which);
    cout << "���� ��ȣ " << which << "�� ��� : " << rslt << endl;

    return 0;
}
