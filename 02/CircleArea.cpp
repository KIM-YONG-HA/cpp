#include <iostream>
#include <locale>
#include <codecvt>

using namespace std;

int main() {
    
    setlocale(LC_ALL, ""); // Locale을 기본값으로 설정

    const double PI {3.141592};
    double radius;

    cout << "원의 반경을 입력 하시오 : ";
    cin >> radius;

    double area = radius * radius * PI;

    cout << "원의 면적 = " << area << endl;

    return 0;

}
