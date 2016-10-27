#include <iostream>
#include <algorithm>

using namespace std;

int read_int() {
    int value;
    cin >> value;
    return value;
}
string read_string() {
    string value;
    cin >> value;
    return value;
}

void do_add() {
    int a = read_int();
    int b = read_int();
    cout << a+b << endl;
}
void do_substract() {
    int a = read_int();
    int b = read_int();
    cout << a-b << endl;
}
void do_multiply() {
    int a = read_int();
    int b = read_int();
    cout << a*b << endl;
}
void do_divide() {
    int a = read_int();
    int b = read_int();
    cout << a/b << endl;
}

int main() {
    string t = read_string();

    if (t == "+" || "add") {
        do_add();
    } else if (t == "-" || t == "substract") {
        do_substract();
    } else if (t == "*" || t == "multiply") {
        do_multiply();
    } else if (t == "/" || t == "divide") {
        do_divide();
    }
}
