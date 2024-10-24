#include <iostream>

// 비지역변수(non-local variable)
int a; // 프로그램 전체 영역
static int b{10}; // 소속 파일 전체 영역

int f() {
    int c{20}, d{30}; // 소속 블록 전체 영역

    {
        // 지역변수
        int d{40}; // 이름 가리기,  소속 블록 전체 영역에서
        int e{50};

        // 값 출력
        std::cout << "Inside inner block:\n";
        std::cout << "d_local: " << d_local << ", e: " << e << "\n";
    }

    // 바깥 블록의 d 출력
    std::cout << "Inside function f:\n";
    std::cout << "c: " << c << ", d: " << d << "\n";

    return 0; // 함수 반환
}

int main() {
    f(); // 함수 호출
    return 0; // 프로그램 종료
}
