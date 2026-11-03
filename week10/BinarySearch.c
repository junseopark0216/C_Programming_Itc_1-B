#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
        // 시작 위치를 0으로 설정한다.
        int left = 0;
        // 끝 위치를 배열크기 - 1로 설정한다.
        int right = size -1;
        // 시작 위치가 끝 위치보다 작거나 같은 동안 반복한다.
        while (left<=right) {
            // 중간 위치를 계산한다.
            int middle = (left+right)/2;
            // 만약 중간 위치의 값이 찾을값과 같다면 중간 위치를 반환하고 탐색을 종료한다.
            if (arr[middle]==target) {
                return middle;
            }
            // 그렇지 않고 중간 위치의 값이 찾을값보다 작다면 시작 위치를 중간위치 + 1로 변경한다.
            else if (arr[middle]<target) {
                left = middle + 1;
            }
            // 그렇지 않다면 끝 위치를 중간 위치 -1로 변경한다. 
            else {
                right = middle - 1;
            }
        }
        return -1;
    }


int main() {

    
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("원소 %d는 인덱스 %d에 존재합니다.\n", target, result);
    }
    else {
        printf("원소를 찾지 못했습니다.\n");
    }
}