#include <iostream>
#include <algorithm>

using namespace std;

void do_add() {
    int a, b;
    cin >> a >> b;
    cout << a+b << endl;
}
void do_substract() {
    int a , b;
    cin >> a >> b;
    cout << a-b << endl;
}
void do_multiply() {
    int a, b;
    cin >> a >> b;
    cout << a*b << endl;
}
void do_divide() {
    int a, b;
    cin >> a >> b;
    cout << a/b << endl;
}

int main() {
    string t;
    cin >> t;

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
