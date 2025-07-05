#include <iostream>
#include <sstream>
using namespace std;
int evaluate(string expr) {
    int result = 0, num;
    char op = '+';
    stringstream ss(expr);
    while (ss >> num) {
        if (op == '+') result += num;
        else if (op == '-') result -= num;
        else if (op == '*') result *= num;
        else if (op == '/') result /= num;
        ss >> op;
    }
    return result;
}
int main() {
    string expr;
    cout << "Enter the linear expression : ";
    getline(cin, expr);
    cout << "Result: " << evaluate(expr) << endl;
    return 0;
}
