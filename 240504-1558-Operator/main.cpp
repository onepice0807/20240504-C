#include <stdio.h>

int main() {
    // 변수(Variable)
    // DataType 변수명; // 항상명령뒤에는 ;(세미콜론)을 붙여야합니다.
    // 변수명은 영대소문자, _, 숫자(숫자는 첫글자로 사용할 수 없습니다.)
    // 변수명의 길이는 visual studio 128문자가능 표준 C는 31문자
    // 변수명의 명명 규칙은 저장하는 값의 용도를 알려주는 단어나 문자을 사용하시는게
    // 좋습니다.
    int score;   // score변수 정의한다. 4byte사이즈의 정수 저장공간을 할당해줘
    int isLive;

    // int 3num;   // 변수명의 첫글자로 숫자 사용이 안됩니다.

    int num3;

    int 넘버;   // 변수명 한글 쓰지 마세요...

    //같은 중괄호 블럭 안에는 동일한 변수명이 있을 수 없습니다.
    //float score;

    score = 20;

    // 콘솔창에 값을 출력할때 printf 함수를 사용합니다.
    // printf는 형식지정문자열을 지원합니다.
    printf("ext socre = %d\n", score);

    {
        int score;

        score = 100;

        printf("inner score = %d\n", score);
    }





    return 0;
}