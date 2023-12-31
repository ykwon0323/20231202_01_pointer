/**
 * 포인터의 개념
 * 
 * 데이터의 주소값 - 해당데이터가 저장된 메모리의 시작 주소
 * 주소값을 1바이트 크기의 메모리 공간으로 나누어 표현
 * ex)
 * int형 데이터 - 4 바이트 
 * int형 데이터 주소값 - 1 바이트(시작 주소)
 * 
 * */ 

/**
 * 포인터란?
 * 
 * - 메모리의 주소값을 저장하는 변수
 * - 포인터 변수라고도 함
 * ex)
 * char - 문자 저장
 * int - 정수 저장
 * pointer - 주소값 저장
 * 
 sample)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 int n = 100; // 변수의 선언
 int *ptr = &n; // 포인터의 선언
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 
*/

/**
 * 포인터 연산자
 * 1 주소 연산자 : &(앰퍼센드[ampersand])
 *  - 변수의 이름 앞에 사용
 *  - 해당 변수의 주소값을 반환
 *  - 번지 연산자라고도 불림
 * 2 참조 연산자 : *
 *  - 포인터의 이름이나 주소 앞에 사용
 *  - 포인터에 가르키는 주소에 저장된 값을 반환
 * 
 * 포인터의 선언
 * 
 * 주의)
 * - 포인터는 반드시 먼저 초기화 되어야함
 * - 그렇지 않으면 의도하지 않은 메모리의 값을 변경하게됨
 * - C 컴파일러는 초기화되지 않은 포인터에 참조 연산자를 사용하면 오류를 발생시킴
 * - 포인터 선언과 동시의 초기화 하는게 좋음!
sample)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
타입*포인터이름;

[추천사용법]
타입*포인터이름 = &변수이름;
OR
타입*포인터이름 = 주소값;
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 
 * 
*/

# include <stdio.h>

int main(void){

    printf("ex1)--------------------\n");
    
    int x = 8; // 변수의 선언
    int*ptr = &x; // 포인터의 선언
    int*pptr = &ptr; // 포인터의 참조

    printf("x의 값: %d \n", x);
    printf("ptr의 주소값: %#x \n", ptr);
    printf("pptr의 주소값: %#x \n", pptr);
    printf("ptr의 값: %d \n", *ptr);
    printf("pptr의 값: %d \n", *pptr);

    printf("ex2)--------------------\n");

    int num01 = 1234;
    double num02 = 3.14;
    int*ptr_num01 = &num01;
    double*ptr_num02 = &num02;

    printf("포인터의 크기는 %d 입니다. \n", sizeof(ptr_num01));
    printf("포인터 ptr_num01이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num01);
    printf("포인터 ptr_num02가 가리키고 있는 주소값은 %#x입니다.\n", ptr_num02);
    printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
    printf("포인터 ptr_num02가 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *ptr_num02);
 
    // %d 
    // "%#x" 주소값

    /***
     * sizeof 연산자를 사용하여 포인터 변수의 크기를 구하고 있음
     * 포인터 변수는 메모리에서 변수의 위치를 나타내는 주소를 다루는 변수
     * 그 크기는 일반적으로 CPU에 따라 결정됨
     * 
     * 32비트 CPU에서는 1워드(word)의 크기가 4바이트
     * 포인트 변수의 크기 또한 4바이트
     * 
     * 포인터 변수의 크기는 컴파일러로 컴파일 할 때 그 크기까지 직접 명시할 수 있음
     * 포인터 변수의 크기는 CPU의 종류와 컴파일할 때 사용된 컴파일러의 정책에 따라서 달라질 수 있음
     * 
     * 포인터가 가리키는 변수의 타입에 따라 포인터의 타입도 같이 바꿔주고 있음
     * 포인터의 타입은 참조 연산자를 통해 값을 참조할 때
     * 참조할 메모리의 크기를 알려주는 역할을 하기 때문
     * 
     * 
     * 
     * 
     * */ 





    return 0;
}