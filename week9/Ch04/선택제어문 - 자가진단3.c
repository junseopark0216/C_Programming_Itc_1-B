#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    if (age >= 20) {
        printf("adult");
    }
    else {
        int left = 20 - age;
        printf("%d years later", left);
    }

}