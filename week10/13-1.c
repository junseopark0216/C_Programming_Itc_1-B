#include <stdio.h>
#include <string.h>    

struct Student {    // Student 구조체 정의
    char name[50];    // 이름
    int id;    // 학번 
    float gradePoints;    // 점수 
};    // 구조체 정의는 선언문이므로 끝에 ; 필요

int main() {
    struct Student student1, student2;    // 학생 2명의 구조체 변수 선언 (각자 별도 메모리)

    // 첫 번째 학생 데이터 초기화
    strcpy(student1.name, "Moon");    // name은 배열 → = 대입 불가, strcpy 사용
    student1.id = 20240001;    // 점(.) 연산자로 멤버에 접근
    student1.gradePoints = 95.5;

    // 두 번째 학생 데이터 초기화
    strcpy(student2.name, "Yun");
    student2.id = 20240002;
    student2.gradePoints = 88.5;

    // 첫 번째 학생 데이터 출력
    printf("학생 1의 정보:\n");
    printf("이름: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("점수: %.2f\n\n", student1.gradePoints);    // %.2f → 소수점 둘째 자리까지 출력

    // 두 번째 학생 데이터 출력
    printf("학생 2의 정보:\n");
    printf("이름: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("점수: %.2f\n", student2.gradePoints);

    return 0;
}
