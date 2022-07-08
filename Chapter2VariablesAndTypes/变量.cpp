//
// Created by 黄荣 on 2022/7/3.
//

#include "iostream"

using namespace std;

int main() {

    // 整形
    short num1 = 1;
    int num2 = 1;
    long num3 = 1;
    long long num4 = 1;

    cout << "short size = " << sizeof(num1) << endl;
    cout << "int size = " << sizeof(num2) << endl;
    cout << "long size = " << sizeof(num3) << endl;
    cout << "long long size = " << sizeof(num4) << endl;

    // 浮点型

    float f1 = 3.14f;
    double d1 = 3.1415926;

    cout << "flout f1 " << f1 << endl;
    cout << "d1 = " << d1 << endl;
    cout << "float size = " << sizeof(float ) << endl;
    cout << "double size = " << sizeof(double ) << endl;

    // 字符型
    char ch = 'a';
    cout << "字符 a :" << endl;
    cout << ch << endl;
    cout << "char size " << sizeof (ch) << endl;


    return 0;
}
