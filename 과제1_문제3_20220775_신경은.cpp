// 3-1��
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "�ܾ �Է��ϼ��� : ";
    cin >> word;

    int cnt = 0; // ���� �ʱ�ȭ
    for (int i = 0;i < word.length();i++) {  // �� ù �ܾ���� ������ �ܾ���� �ϳ��� üũ�� ����
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {  // ���� �ܾ ������ ��쿡�� ���
            cnt++;
        }
    }

    cout << "������ ���� : " << cnt << endl;
    return 0;
}


// 3-2��
#include <iostream>
#include <string>
using namespace std;

void get_word(string* word) {
    cout << "�ܾ �Է��ϼ��� : ";
    cin >> *word;
}
int count_vowel(string* word) {
    int cnt = 0; // ���� �ʱ�ȭ
    
    for (char c : *word) {  // �ϳ��� Ž���ϱ�
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cnt++;
    }

    return cnt;
}
int main() {
    string word;

    get_word(&word);

    cout << "������ ���� : " << count_vowel(&word) << endl;

    return 0;
}


// 3-3��
#include <iostream>
#include <string>
using namespace std;

void get_word(string* word) {
    cout << "�ܾ �Է��ϼ��� : ";
    cin >> *word;
}
void remove_vowel(string* word) {
    // erase(pos, len) �Լ�
    // pos ��ġ���� len�� ���� ����

    int i = 0;

    for (char c : *word) {  // �ϳ��� Ž���ϱ�
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            word->erase(i, 1);
            i--;  // �ϳ��� �������� i��ġ�� �������� �Ѿ�� �� ��
        }
        i++;
    }
}
int main() {
    string word;

    get_word(&word);

    remove_vowel(&word);

    cout << "������ ������ string : " << word << endl;

    return 0;
}

// 3-4��
//#include <iostream>
#include <string>
using namespace std;

void get_sen(string* s) {  // ������ �޴� �Լ� 
    cout << "������ �Է��ϼ��� : ";

    getline(cin, *s);
}
void change_sen(string* input, string* output) { //������ �����ϰ�, �ҹ��ڴ� �빮�ڷ� �ٲ� ���
    string s = "";  // ���߿� output�� �����ϱ� ���� �ӽ� ����

    for (char c : *input) {
        if (c == ' ') {  // ������ ���� ���� ��
            continue;
        }
        s += toupper(c);
    }

    *output = s;  // �����Ϳ� ���� �־��ֱ�
}
int main() {
    string sen, output;
    get_sen(&sen);
    change_sen(&sen, &output);

    cout << "���� �� string : " << output << endl;

    return 0;
}


// 3-5��
#include <iostream>
#include <string>
using namespace std;

void get_sen(string* s) {  // ������ �޴� �Լ� 
    cout << "������ �Է��ϼ��� : ";

    getline(cin, *s);
}
void change_sen(string* input, string* output) { //������ �����ϰ�, �ҹ��ڴ� �빮�ڷ� �ٲ� ���
    string s = "";  // ���߿� output�� �����ϱ� ���� �ӽ� ����
    int first = 1; // �����̽� ���� ù �������� Ȯ���ϱ� ���� ����

    for (char c : *input) {
        if (first == 1) {  // ù ����, �� �빮�ڷ� �ٲ�� �ϸ�
            s += toupper(c);
            first = 0;  // ������ ���� ���ڴ� ù���ڰ� �ƴ�!
        }
        else {
            s += c;
        }

        if (c == ' ') {  // �����̸� ������ ù������
            first = 1;
        }
    }

    *output = s;  // �����Ϳ� ���� �־��ֱ�
}
int main() {
    string sen, output;
    get_sen(&sen);
    change_sen(&sen, &output);

    cout << "���� �� string : " << output << endl;

    return 0;
}