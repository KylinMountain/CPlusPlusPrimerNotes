//
// Created by kylin on 2022/7/3.
//

#include "iostream"

using namespace std;

extern int ei;

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

    signed char ch1 = 'A';
    unsigned char ch2 = 186;
    cout << "字符 signed char " << ch1 << endl;
    // 是个乱码
    cout << "字符 unsigned char" << ch2  << endl;

    // 自动转换成bool
    int i = 42;
    if (i) {
        cout << "i is true" << i << endl;
    }

    // 自动转换为整形
    int pi = f1;
    cout << "int pi is " << pi << endl;

    unsigned u = 11;
    while (u > 0) {
        --u;
        cout << u << endl;
    }

    // 初始化
    int units_sold = 0;
    // 列表初始化
    int units_sold2 = {0};
    int units_sold3{0};
    //
    int units_sold4(0);

    // 但是如果有转换类型的时候，可能会报编译错误
    long double ld = 3.1415926;
//    int a{ld}, b = {ld};  编译会报错，因为类型转换时候信息丢失了
    int c = (ld), d = ld; // 正确转换

    // 函数外的变量 未初始化 会给零值
    // 函数内的变量 为初始化 包含一个不确定的值 所以最好都初始化
    // 建议初始化每一个内置类型的变量。虽然并非必须这么做，但如果我们不能确保初始化后程序安全，那么这么做不失为一种简单可靠的方法。

    // 为了支持分离式编译，C++语言将声明和定义区分开来。
    // 变量申明 extern 和 定义
    // 申明 不分配内存
    // 定义分配内存并初始化
    int ei = 20;
    return 0;
}
