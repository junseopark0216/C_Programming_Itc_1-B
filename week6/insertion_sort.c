#include <stdio.h>
// 삽입 정렬
int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    // 1번 인덱스부터 시작 (0번은 이미 정렬된 것으로 간주)
    for (int i = 1; i < n; i++) {

        int key = arr[i]; // 현재 삽입할 값
        int j = i - 1;   // 정렬된 부분의 마지막 인덱스

        // key보다 큰 값들을 오른쪽으로 한 칸씩 밀기
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 자리에 key 삽입
        arr[j + 1] = key;
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}