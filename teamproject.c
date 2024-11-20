#include <stdio.h>
#define REQUIRED 1
#define OPTIONAL 0
#define DESIGN 1
#define NON_DESIGN 0

typedef enum {
    FRESHMAN = 1, // 1학년
    SOPHOMORE,    // 2학년
    JUNIOR,       // 3학년
    SENIOR        // 4학년
} Year;

typedef enum {
    SEMESTER_1 = 1, // 1학기
    SEMESTER_2      // 2학기
} Semester;

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
    {FRESHMAN, SEMESTER_1, "컴퓨터공학입문", REQUIRED, NON_DESIGN, 3},
    {FRESHMAN, SEMESTER_2, "C프로그래밍응용", OPTIONAL, DESIGN, 3},
    {SOPHOMORE, SEMESTER_1, "데이터구조", REQUIRED, NON_DESIGN, 3}
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
