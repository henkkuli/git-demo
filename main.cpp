#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char t;
    cin >> t;

    if (t == '+') {
        // Compute the sum of given numbers
        int a, b;
        cin >> a >> b;
        cout << a+b << endl;
    } else if (t == '-') {
        int a , b;
        cin >> a >> b;
        cout << a-b << endl;
    } else if (t == '*') {
        int a, b;
        cin >> a >> b;
        cout << a*b << endl;
    }
}
