#include <stdio.h>

// 과목 구조체 정의
typedef struct {
    int year;           // 학년
    int semester;       // 학기
    char name[50];      // 과목명
    int isRequired;     // 전공필수 여부 (1: 필수, 0: 선택)
    int isDesign;       // 설계과목 여부 (1: 설계, 0: 일반)
    int score;          // 학점
} Subject;

// 전역 과목 데이터
Subject subjects[] = {
    {1, 1, "컴퓨터공학입문", 1, 0, 3},
    {1, 2, "C프로그래밍응용", 0, 1, 3},
    {2, 1, "데이터구조", 1, 0, 3}
};
int subjectCount = sizeof(subjects) / sizeof(subjects[0]);

int Grade_Calculator(); //학점 계산기

int main() {
    int year, semester;

    printf("현재 학년을 입력하세요. (ex: 1): ");
    scanf("%d", &year);
    printf("현재 학기를 입력하세요. (ex: 2): ");
    scanf("%d", &semester);

    return 0;
}