#include <stdio.h>

int main() {
    int num = 10;
    int *pnum;

    pnum = &num;

    printf("int num = 10;\nint *pnum;\npnum = &num;\n");
    printf("*(pnum) = %d \n", *(pnum));
    printf("(*pnum)++ = %d \n", (*pnum)++);
    printf("(*pnum)+1 = %d \n", (*pnum)+1);
    printf("*pnum+=1 = %d \n", *pnum+=1);
    printf("(*pnum)+=1 = %d \n", (*pnum)+=1);
    *pnum = *pnum + 1;
    printf("*pnum=*pnum+1 = %d \n", *pnum);
    printf("++*pnum = %d \n", ++*pnum);
    printf("++(*pnum) = %d \n", ++(*pnum));

    int arr[3] = {10, 20, 30};
    int *p = arr;
    printf("int arr[3] = {10, 20, 30};\nint *p = arr;\n");
    printf("*p++ = %d\n", *p++);
    printf("*p = %d", *p);

    return 0;
}