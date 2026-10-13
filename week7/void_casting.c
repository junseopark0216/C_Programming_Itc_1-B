#include <stdio.h>

//void 포인터 형 변환 실습

void main () {
    int m_int = 15;
    double m_double = 3.1477;
    char m_char = 'M';
    void *mp;

    mp = &m_int;
    printf("m_double %d\n", *(int*)mp); //(int*)mp 가 형변환 부분. 그 앞에 *을 붙여 값 표시.

    mp = &m_double;
    printf("m_double %.1f\n", *(double*)mp); //(double*)mp가 형변환 부분. 그 앞에 *을 붙여 값 표시.

    mp = &m_char;
    printf("m_char %c\n", *(char*)mp); //(char*)mp가 형변환 부분. 그 앞에 *을 붙여 값 표시.

}