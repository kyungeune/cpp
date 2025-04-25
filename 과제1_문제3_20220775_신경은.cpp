// 3-1번
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "단어를 입력하세요 : ";
    cin >> word;

    int cnt = 0; // 개수 초기화
    for (int i = 0;i < word.length();i++) {  // 맨 첫 단어부터 마지막 단어까지 하나씩 체크할 예정
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {  // 현재 단어가 모음일 경우에만 취급
            cnt++;
        }
    }

    cout << "모음의 개수 : " << cnt << endl;
    return 0;
}


// 3-2번
#include <iostream>
#include <string>
using namespace std;

void get_word(string* word) {
    cout << "단어를 입력하세요 : ";
    cin >> *word;
}
int count_vowel(string* word) {
    int cnt = 0; // 개수 초기화
    
    for (char c : *word) {  // 하나씩 탐색하기
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cnt++;
    }

    return cnt;
}
int main() {
    string word;

    get_word(&word);

    cout << "모음의 개수 : " << count_vowel(&word) << endl;

    return 0;
}


// 3-3번
#include <iostream>
#include <string>
using namespace std;

void get_word(string* word) {
    cout << "단어를 입력하세요 : ";
    cin >> *word;
}
void remove_vowel(string* word) {
    // erase(pos, len) 함수
    // pos 위치부터 len개 문자 삭제

    int i = 0;

    for (char c : *word) {  // 하나씩 탐색하기
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            word->erase(i, 1);
            i--;  // 하나를 빼줬으니 i위치는 다음으로 넘어가면 안 됨
        }
        i++;
    }
}
int main() {
    string word;

    get_word(&word);

    remove_vowel(&word);

    cout << "모음을 제외한 string : " << word << endl;

    return 0;
}

// 3-4번
//#include <iostream>
#include <string>
using namespace std;

void get_sen(string* s) {  // 문장을 받는 함수 
    cout << "문장을 입력하세요 : ";

    getline(cin, *s);
}
void change_sen(string* input, string* output) { //공백을 제거하고, 소문자는 대문자로 바꿔 출력
    string s = "";  // 나중에 output을 저장하기 위한 임시 변수

    for (char c : *input) {
        if (c == ' ') {  // 공백은 담지 않을 것
            continue;
        }
        s += toupper(c);
    }

    *output = s;  // 포인터에 직접 넣어주기
}
int main() {
    string sen, output;
    get_sen(&sen);
    change_sen(&sen, &output);

    cout << "변형 후 string : " << output << endl;

    return 0;
}


// 3-5번
#include <iostream>
#include <string>
using namespace std;

void get_sen(string* s) {  // 문장을 받는 함수 
    cout << "문장을 입력하세요 : ";

    getline(cin, *s);
}
void change_sen(string* input, string* output) { //공백을 제거하고, 소문자는 대문자로 바꿔 출력
    string s = "";  // 나중에 output을 저장하기 위한 임시 변수
    int first = 1; // 스페이스 이후 첫 글자인지 확인하기 위한 변수

    for (char c : *input) {
        if (first == 1) {  // 첫 글자, 즉 대문자로 바꿔야 하면
            s += toupper(c);
            first = 0;  // 다음에 오는 글자는 첫글자가 아님!
        }
        else {
            s += c;
        }

        if (c == ' ') {  // 공백이면 다음에 첫글자임
            first = 1;
        }
    }

    *output = s;  // 포인터에 직접 넣어주기
}
int main() {
    string sen, output;
    get_sen(&sen);
    change_sen(&sen, &output);

    cout << "변형 후 string : " << output << endl;

    return 0;
}