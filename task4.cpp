#include<iostream>
using namespace std;

int add(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int sub(int a, int b);

int main() {
    int a, b, ans;
    char op;

    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        ans = add(a, b);
        cout << "Addition: " << ans;
    } else if (op == '-') {
        ans = sub(a, b);
        cout << "Subtraction: " << ans;
    } else if (op == '*') {
        ans = mul(a, b);
        cout << "Multiplication: " << ans;
    } else if (op == '/') {
        ans = div(a, b);
        cout << "Division: " << ans;
    } else {
        cout << "Invalid operator!";
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Division by zero not allowed." << endl;
        return 0;
    }
}
