#include <iostream>

using namespace std;


// 常量 定义方式
// #define 常量名 常量值
// const 类型 常量名 = 常量值

#define DAY 7

/**
 * 学习注释
 * @return
 */
int main() {
    cout << "Hello, World!" << endl;

    // cout 用于输出到console
    cout << "hello world" << endl;

    /**
    * 给一段内存起名
    * 变量创建语法 数据类型 变量名 = 初值；
    * @return
    */
    int a = 10;
    cout << "a = " << a << endl;

    //    DAY = 14; 报错 常量不可修改
    cout << "一周总共有： " << DAY << endl;

    const int month = 12;
//    month = 24; 报错 常量不可修改

    cout << "一年总共有 ： " << month << endl;

    /**
     * 不可用关键字起名, 否则会产生歧义
     * 另外起名 只能是字母或者下划线或者数字，但是必须1⃣以字母或者下划线开头
     * @return
     */

    // 控制流
    int sum=0, val = 1;
    while(val <= 10) {
        sum += val;
        val++;
    }
    cout << "Sum is " << sum << endl;

    sum = 0;
    for (int val = 1; val <= 10; val++) {
        sum += val;
    }
    cout << "Sum is " << sum << endl;

    sum=0, val = 0;
    while (cin >> val) {
        sum += val;
        if (val == -1) {
            break;
        }
    }
    cout << "sum is" << sum << endl;


    return 0;
}
