# C/C++ 프로그래밍 기말고사 대비 문제

- 출제 범위: 11장 문자열 상수와 배열/13장 구조체 · 공용체 · 열거형
정답 및 해설은 맨 밑 참조
---
## 1. 문자열 포인터와 문자열 배열

다음 코드에 대한 설명으로 옳은 것은?

```c
char *p = "Hello";
char arr[] = "Array";
```

① `p[0] = 'h';` 는 문자열 상수를 안전하게 `"hello"`로 바꾼다.
② `arr = "World";` 로 `arr`가 다른 문자열을 가리키게 할 수 있다.
③ `arr[0] = 'a';` 는 가능하며, `sizeof(arr)`의 값은 6이다.
④ `p = "World";` 는 컴파일 오류가 발생한다.

---

## 2. 구조체 멤버 접근 (`.` 과 `->`)

다음 코드에서 `"Incheon"`에 접근하는 표현으로 **옳지 않은 것**은?

```c
struct Address  { char city[20]; };
struct Employee { char name[20]; struct Address *address; };

struct Address  addr = { "Incheon" };
struct Employee emp  = { "Kim", &addr };
struct Employee *pe  = &emp;
```

① `emp.address->city`
② `pe->address->city`
③ `(*pe).address->city`
④ `emp.address.city`

---

## 3. 구조체 변수의 대입 

다음 프로그램의 실행 결과로 옳은 것은?

```c
#include <stdio.h>

struct Item {
    int id;
    char tag[10];
    int *pval;
};

int main(void) {
    int x = 10;
    struct Item a = { 1, "AA", &x };
    struct Item b = a;

    b.id = 2;
    b.tag[0] = 'B';
    *(b.pval) = 20;

    printf("%d %s %d\n", a.id, a.tag, *(a.pval));
    return 0;
}
```

① `1 AA 10`
② `1 AA 20`
③ `2 BA 20`
④ `1 BA 20`

---

## 4. 공용체

공용체(union)에 대한 설명으로 **옳지 않은 것**은?

① `struct` 대신 `union` 키워드로 선언하며, 멤버를 참조하는 규칙(`.`, `->`)은 구조체와 같다.
② 공용체의 모든 멤버는 메모리 시작 주소가 동일하다.
③ 공용체의 크기는 모든 멤버 크기의 합이므로, 여러 멤버의 값을 동시에 보관할 수 있다.
④ 한 멤버에 값을 저장하면 다른 멤버의 값이 덮어씌워지므로, 가장 최근에 저장한 멤버의 값만 유효하다.

---

## 5. 열거형

다음 프로그램의 실행 결과로 옳은 것은?

```c
#include <stdio.h>

enum Color { RED, GREEN = 5, BLUE, WHITE };

int main(void) {
    printf("%d %d %d\n", RED, BLUE, WHITE);
    return 0;
}
```

① `0 6 7`
② `1 6 7`
③ `0 2 3`
④ `0 5 6`

---
---

## 정답 및 해설

| 번호 | 1 | 2 | 3 | 4 | 5 |
|:---:|:---:|:---:|:---:|:---:|:---:|
| 정답 | ③ | ④ | ② | ③ | ① |

**1번 — ③**
`char arr[] = "Array";` 는 문자열이 배열에 복사되므로 내용 변경이 가능하고, 크기는 문자 5개 + 널 문자(`'\0'`) 1개 = 6바이트이다.
① 문자열 상수는 읽기 전용 메모리에 있어 수정하면 실행 시간 오류가 발생할 수 있다.
② 배열명은 포인터처럼 다른 주소로 바꿀 수 없다(컴파일 오류).
④ 포인터 변수는 다른 문자열 리터럴을 가리키도록 변경할 수 있다.

**2번 — ④**
`address`는 `Address` 구조체에 대한 **포인터**이므로 그 멤버에는 화살표 연산자(`->`)를 써야 한다. `emp.address.city`는 컴파일 오류이다.
`pe->address`는 `(*pe).address`와 같다.

**3번 — ②**
구조체 대입은 전체 복사이다. `id`, `tag`(배열) 같은 기본 자료형 멤버는 값 자체가 복사되므로(깊은 복사) `b`를 바꿔도 `a`는 그대로 `1`, `"AA"`이다.
포인터 멤버 `pval`은 주소만 복사되므로(얕은 복사) `a.pval`과 `b.pval`이 같은 `x`를 가리킨다. 따라서 `*(a.pval)`은 `20`이다.

**4번 — ③**
공용체는 모든 멤버가 같은 메모리 위치를 공유하므로, 크기는 **가장 큰 멤버** 기준이며 한 번에 하나의 멤버만 의미 있는 값을 가진다. 각 멤버가 고유한 메모리 공간을 갖는 것은 구조체이다.

**5번 — ①**
열거형 상수는 따로 지정하지 않으면 0부터 시작하고, 이후 값은 바로 앞 상수보다 1씩 커진다.
`RED = 0`, `GREEN = 5`(지정), `BLUE = 6`, `WHITE = 7`.
