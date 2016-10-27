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
    string type = read_string();

    if (type == "+" || "add") {
        do_add();
    } else if (type == "-" || type == "substract") {
        do_substract();
    } else if (type == "*" || type == "multiply") {
        do_multiply();
    } else if (type == "/" || type == "divide") {
        do_divide();
    }
}
