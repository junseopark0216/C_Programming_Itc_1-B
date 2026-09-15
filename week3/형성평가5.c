#include <stdio.h>
int main()  {
    int month;
    scanf("%d", &month);
    
    switch (month)  {
        case 2:
            printf("28");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        default:
            printf("31");
    }

}