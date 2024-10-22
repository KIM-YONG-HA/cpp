
#include <iostream>

using namespace std;

namespace NameSpace1 { int a = 10;}
namespace NameSpace2 { int a = 20;}
int a = 30;
namespace NameSpace1 { int b = 50;}


int main()
{

int a = 40; // wldurqustn

std::cout << NameSpace1::a << std::endl; // 10
std::cout << NameSpace2::a << std::endl; // 20

std::cout << ::a << std::endl; // 전역명칭공간 40
std::cout << a << std::endl; // 40이고 a 변수없다면 전역명칭공간 a 30 출력

std::cout << NameSpace1::b << std::endl; // b

cout << a << endl;


}

/*
using을 이용한 명칭공간 사용

using namespace std;

using std::cout
using std::endl


1. C++ 언허는 c언어에 객체지향 프로그램, 일반화 프로그래밍, 예외처리 등의 기능을 추가하여 확장된 프로그램이다.
2. c++ 프로그램은 .cpp 라는 확장자를 갖는 소스 프로그램 파일과
 .h라는 확장자를 갖는 헤더파일 두 종류를 소스파일에 작성한다

3. 선행처리 지시어를 이용하여 소스 파일의 컴파일에서 앞서 
헤더파일의 삽입, 매크로 선언, 조건부 컴파일 등의 선행처리를 한다.

4. c++ 프로그램은 함수로 구성되며 콘솔에서 동작하는 응용 프로그램의 경우 
main() 이라는 함수부터 프로그램 실행이 시작된다.

5. 명칭공간을 이용하면 프로그램을 구성하는 영역별로 다른 영역과의 충돌 우려없이 
자유롭게 명칭을 선언하여 사용할 수 있다. 







*/

