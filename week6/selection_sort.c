#include <stdio.h>
// 선택 정렬
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    // 외부 루프: 정렬할 기준 위치 (0부터 n-2까지)
    for (int i = 0; i < n - 1; i++) {

        int minIdx = i; // 현재 위치를 최솟값 인덱스로 가정

        // 내부 루프: i+1부터 끝까지 돌며 최솟값 찾기
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // 더 작은 값 발견 시 인덱스 갱신
            }
        }

        // 최솟값을 현재 위치(i)와 교환
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}