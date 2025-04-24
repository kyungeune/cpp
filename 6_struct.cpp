#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
struct Address
{
	string name;
	int score;
};
struct Subject
{
	string name;
	int score;
};
struct Student
{
	string name;
	int age;
	Address address;  // 구조체 중첩
	Subject subjects[5];  // 중첩
};
struct SType
{
	int m;
	char str1[4];
	char* str2;
	const char* str3;
};
struct Compare
{
	char m;
};
void main()
{
	// 구조체 배열
	Student students[3];
	students[0].name = "John";  // 강의안에서는 작은따옴표
	students[0].age = 20;
	students[1].name = "Mike";
	students[1].age = 23;

	Student students2[3] =
	{
		{"John",20},
		{"Mike",23}
	};  // 세미콜론!

	// 구조체 포인터
	Student* ptr = new Student;

	if (ptr != nullptr)
	{
		ptr->name = 'Mike';
		ptr->age = 23;
	}


	// 구조체 연산자 (. ver)
	SType s1;
	s1.m = 2017;
	memcpy(s1.str1, "C++", 4);  // 메모리 블록 통째로 복사 (dest, src, n)
	s1.str2 = new char[6];  // 추가
	strcpy(s1.str2, "World");
	

	SType s2;
	s2 = s1;
	
	cout << s2.str1;  // C++


	// 구조체 연산자 (-> ver)
	SType s;
	SType* ps = &s;
	ps->m = 2017;
	ps->str3 = "C++";  // const덕분에 가능

	cout << ps->m << " " << ps->str3 << endl;  // 2017 C++

	// 최종정리
	 char str1[4];        // 고정 크기 배열
	 memcpy(s.str1, "C++", 4);   // "C++\0" 포함 4바이트 복사
	 
	 char* str2;          // 포인터 (가리키는 메모리 필요)
	 s.str2 = new char[4];         // "C++" + '\0' 까지 4바이트
	 strcpy(s.str2, "C++");
	
	 const char* str3;    // 문자열 상수 포인터 (대입용)
	 s.str3 = "C++";     // ✅ 가장 간단


	// 구조체 연산자
	Compare a, b;

	a.m = 1;

	b = a;
	b == a;  // 오류
	b > a;  // 오류

	
	// 구조체 연산자 예시
	// 1. 구조체 포인터 ptr을 선언하시오
	Student* ptr = new Student;  // new Student 안 해주면 에러남
	// 2. ptr에 이름(존)과 나이(23)을 저장하시오
	ptr->name = "John";
	ptr->age = 23;
	// 3. ptr에 첫번째 subjects 이름(Math)와 점수(80)을 저장하시오
	ptr->subjects->name = "Math";
	ptr->subjects->score = 80;
}