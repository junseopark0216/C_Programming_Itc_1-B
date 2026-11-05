#include <stdio.h>

int main() {
    int arr[100], mul[100];
    int cnt=0;
    for (int i=0; i<100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]==0) {
            break;
        }
        if ((i+1)%2==0) {
            mul[cnt] = arr[i];
            cnt++;
        }
    }
    for (int i=0; i<cnt; i++) {
        printf("%d ",mul[i]);
    }

}


