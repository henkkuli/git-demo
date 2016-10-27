#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string t;
    cin >> t;

    if (t == "+" || "add") {
        // Compute the sum of given numbers
        int a, b;
        cin >> a >> b;
        cout << a+b << endl;
    } else if (t == "-" || t == "substract") {
        int a , b;
        cin >> a >> b;
        cout << a-b << endl;
    } else if (t == "*" || t == "multiply") {
        int a, b;
        cin >> a >> b;
        cout << a*b << endl;
    } else if (t == "/" || t == "divide") {
        int a, b;
        cin >> a >> b;
        cout << a/b << endl;
    }
}
