#include <stdio.h>
#define MAX_SIZE 50

// 버블 정렬: 포인터(arr)로 배열에 접근해서 오름차순 정렬
void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {           // 전체를 n-1번 돌면서
        for (int j = 0; j < n - 1 - i; j++) {   // 매 회전마다 비교 범위를 줄임
            if (*(arr + j) > *(arr + j + 1)) {  // 왼쪽이 더 크면
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;          // 교환
            }
        }
    }
}

int main() {
    int student;

    printf("학생 수 입력\n");
    scanf("%d", &student);

    if (student > MAX_SIZE || student <= 0) {
        printf("학생 수는 최대 %d명까지 가능합니다. 다시 입력해 주세요.\n", MAX_SIZE);
        return 0;
    }

    int score[MAX_SIZE];
    int *s = &score[0];   // 배열을 가리키는 포인터 int *s = score;와 동일

    for (int i = 0; i < student; i++) {
        printf("성적을 입력하세요\n");
        scanf("%d", &score[i]);  
    }

    bubbleSort(s, student);       // 포인터와 길이를 함수로 전달

    printf("정렬된 성적: ");
    for (int i = 0; i < student; i++) {
        printf("%3d", *(s + i));  // 포인터로 접근
    }
    printf("\n");

    printf("최고 성적: %d\n", *(s + student - 1));  // 오름차순이므로 마지막이 최대
    printf("최하 성적: %d\n", *s);                   // 첫 원소가 최소

    return 0;
}