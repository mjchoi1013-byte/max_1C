#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    // 조건식??? 
    // 비교연산자 또는 논리연산자가 사용된 식
    // 0 : 거짓, 1 : 참
    /*
    if (조건식) {
        조건식이 참일 때 실행될 명령문(들)
    }
    */

    /*
    if (조건식1) {
        조건식이 참일 때 실행될 명령문(들)
    } else if (조건식2) {
        조건식2가 참일 때 실행될 명령문(들)
    } else if (조건식3) {
        조건식3가 참일 때 실행될 명령문(들)
    } else if (조건식n) {
        조건식n가 참일 때 실행될 명령문(들)
    } else {
        위 모든 조건식들이 거짓일 때 실행될 명령문(들)
    */
    int num;
    printf("정수를 입력하세요 >>>");
    scanf("%d", &num);

    if (num%2) {
        printf("홀수\n");
    }
    else {
        printf("짝수\n");
    }

    
    int n1, n2;
    // 두개를 입력 받아서 더 큰 수를 출력하세요
    printf("정수를 2개를 입력하세요 >>>");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("%d\n", n1);
    }
    else if (n1 < n2) {
        printf("%d\n", n2);
    }
    else {
        printf("두 수가 같습니다.");
    }


    // 상수와 변수의 값이 같은지 비교할 때는 상수를 앞에 배치하여 논리적인 에러를 발생시킬 수 있는 근거를 제거한다.
    if (2 == n1) {
    }


    int x, y;
    // x, y 좌표를 입력하여 해당 점이 몇 사분면에 있는지 판단할 수 있는 코드를 작성하세요.
    // x, y가 0인 상황은 없음
    /*printf("x와 y좌표를 각각 입력하세요 >>>");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("1 사분면");
    }
    else if (x < 0 && y > 0) {
        printf("2 사분면");
    }
    else if (x < 0 && y < 0) {
        printf("3 사분면");
    }
    else if (x > 0 && y < 0) {
        printf("4 사분면");
    }
    else {
        printf("0이 아닌 좌표를 입력하세요");
    }*/

    // or

    /*int x, y, res;
    printf("x와 y좌표를 각각 입력하세요 >>>");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) res = 1;
    else if (x < 0 && y > 0) res = 2;
    else if (x < 0 && y < 0) res = 3;
    else  res = 4;
    printf("%d사분면", res);*/
    

    // 초(second)를 입력 받습니다.
    // 입력받은 초를 계산하여 다음과 같이 출력하세요.
    // 초(second)를 입력하세요 >>> 3650
    // 1 ~ 1000,000
    // 3650초는 hh시간 mm분 ss초 입니다.
    // hh시간 mm분 ss초

    int seconds = 3650;    // scanf() 대신...
    int mm = seconds / 60; // 분 계산 (임시)
    int ss = seconds % 60; // 초 계산
    int hh = mm / 60;      // 시간 계산
    mm %= 60;      // 최종 계산된 분

    printf("%d초는 %d시간 %d분 %d초입니다.\n", seconds, hh, mm, ss);
    

    

    return 0;
}
