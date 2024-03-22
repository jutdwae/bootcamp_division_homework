/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n;
    int sum = 0;
    int fac = 1;

    scanf("%d", &n);

    if (n>=0 && n<=12) {
        //sum
        for (int i=1; i<=n; i++) {
            sum += i;
        }
        //fac
        for (int i=1; i<=n; i++) {
            fac *= i;
        }    
        printf("%d\n", sum);
        printf("%d", fac);
    }
    else
        printf("12이하의 수 입력");

    return 0;
}