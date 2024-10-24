#include <iostream>

// 키워드,
// C++ 언어에서 미리 용도를 정해놓은 언어 
// 반드시 정해진 용도로만 사용해야함 



// 식별자 : 여러가지 대상을 구분하기 위헤 만든 이름
// 변수나 함수, 클래스 등의 이름

// 식별자 만드는 규칙

// 첫자는 비 숫자문자를 사용
// 영문 대소문자, 언더바

// 이후 문자는 비숫자문자와 숫자를 사용(특수문자 사용불가)
// 길이 제한 없음
// 키워드는 식별자로 사용 불가 

// 언더바로 시작하는 식별자는 비권장



using namespace std;

int main()

{

/*

적절한 식별자 예제

myname;

my_name : snake case
myName : lower camel case 
MyName : upper camel case, pascal case 

a3
VALUE
Int
initial_value

합계 : C++11 이후
$price : ms C++



부적절한 식별자 예제
4day, my name, my#name, int, initial-value, min:value



*/



/*


C++의 자료형 

자료형은 기본자료형, 복합자료형이 있고
기본 자료형은 정수와 실수가 있다.

복합자료형은 
- 배열, 구조체(struct), 클래스(class), 열거형(enum), 공용체(union)
- 포인터, 참조 


정수자료형(integral types)
고정소수점(fixed-point) 방식의 숫자표현
오버플로우가 발생하지 않도록 조심




문자를 표현하는 자료형
char

정수를 표현하는 자료형
int, short, long, long long 



signed : 음양수 표험
unsigned : 양수만 표현

참/거짓 표현하는 자료형
bool : true, false 저장 

다국어 표현을 위한 자룟형
wchar_t, char16_t, char32_t



실수 자료형 
부동소수점(floating-point) 방식의 숫자 표현
ex) 
123
12.3 x 10^1
1.23 x 10^2


float(4byte)
- 부효  1비트, 지수부 8비트, 가수부 23비트로 구성 
- 1.17549x10^-38 ! 3.40282x10^38
(numeric_limits<float>::min(), numeric_limits<float>::max())


double(8byte)
- 부호 1비트, 지수부 11비트, 가수부 52비트로 구성
2.22507x10^-308 ~ 1.79769x10^308
(numeric_limits<double>::min(), numeric_limits<double>::max())




상수의 표현 - 리터럴

정수형 리터럴의 표현

숫자를 표현하는 문자와 부호만 표현됨
숫자 0 ~9
16진수를 표현하기위해 10~15에 해당되는
A~F a~f



10진수 그냥 작성
2진수 ob

8진수 0237

16진수 0x9f


123 int 형
123u unsigned int
123L long
123ul unsigned long
123ll long long 형



문자 리터럴 표현

작은 따옴표 안에 표기
8진수나 16진수 문자코드로 표기 

char c1 = 'A'; // 아스키코드 65
char c2 = '\101'; // 65의 8진수
char c3 = '\x41'; // 65의 16진수


실수형 리터럴
- 소수점이 있거나 10의 거듭제곱을 표현하기 위한 지수 기호인 e가 있으면 실수형 리터럴

double d1 = 1200.;
double d2 = 1200.0;
double d3 = 12e2; // 12 x 10^2
double d4 = 1.2e+3 // 1.2x 10^3

float f1 = 1200.0f;
float f2 = 12e2f;




변수란
- 프로그램이 실행되는 동안 기억하고 있어야하는 값들을 저장하는 메모리 영역
- 변수에는 자료형과 이름이 지정되어야함
- 모든 변수는 사용전 미리 선언해야함




int korScore, mathScore;
cin >> koScore >> mathScore;

float avrScore = (koScore + mathScore) /  2.0f;



변수 초기화?


형식 1
int total1 = 0; // 선언 및 초기화

int total2; // 선언
total2 = 0; // 초기화 


형식2
int total3(3);

into x(131070.5); // 형변환이 일어나 131070가 출력됨 

x : 0000 0000 0000 0001 1111 11111 1111 1110

y: 1111 1111 1111 1110

short y(x); // -2 오버플로우 발생 

형식3
int total{0};
short a{total}; // 오류 : 축소변환 
float a{total}; // 오류 : 축소변환 



자료형 추론
- 변수를 초기화할때 초기화하는 값의 자료형으로 변수 자료형을 추론함

ex) auto i(10) // int i(10); 과 동일함 



scope : 변수의 사용역역

// 비지역변수(non-local variable)
int a; // 프로그램 전체영역
static int b{10}; // 소속 파일 전체영역

int f(){

    int c{20}, d{30}; // 소속블록 전체 영역

    {

    // 지역변수
    int d{40}; //소속 블록 전체 영역에서
    int e{50};


    }

}



s1.cpp int a;
static int b{10}


s2.cpp extern int a; // 다른쪽에 선언된 a
static int b{10} // 두 파일 다른 b


const 한정어 
변수의 값을 수정할 수 없게함
초기화를 통해서만 값을 정할 수 있음
ex) const double PI {3.141592}

constexpr 한정어
- 그 값을 컴파일할 때 평가
- 실행중 값평가하는 것에 비해 효율적으로 동작할 수 있음 

int a;
std::cin >> a;
const int b = 20;
const int C1 = a; // cin으로 입력된 a 값으로 초기화

constexpr int C2 = a + 10; // 오류 : 컴파일시 a의 값을 알 수 없다 .
constexpr int C3 = b + 100; // 컴파일시 b+100계산가능 
constexpr int C4 = C1 * 2; / / 오류 컴파일 시에 c1의 값을 알 수 없음 


constexpr 함수
모든 인수가 constexpr인 경우 컴파일 할 때 값을 구할 수 있게 함

constexpr int fac(int n){

    return n > 1 ? n * fac(n-1) : 1;

}


void f(int x){

constexpr int a = fac(4); // 컴파일할때 계산
int b = fac(x) // 실행중 계싼 


}



변수의 유효기간(life time)
-- 변수가 언제 만들어져서 언제 없어지는가를 나타탬

자동변수
생성시점 : 함수(블록)가 시작될 때



정적변수
생성시점 : 프로그램이 시작될 뗴 




int x; // 전역변수 - 정적 유효기간

int f(){

    int y{10}; // 지역변수 - 자동 유효기간

    static int z{0} // 정적 유효기간



}










*/












}