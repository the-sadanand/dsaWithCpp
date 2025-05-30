#include <iostream>
#include <string>
using namespace std;

int fibonacci(int n, int depth = 0) {
    string indent(depth * 2, ' '); // 2 spaces per depth
    cout << indent << "Entering: fibonacci(" << n << ")\n";

    if (n == 0) {
        cout << indent << "Base case: fibonacci(0) = 0\n";
        return 0;
    }
    if (n == 1) {
        cout << indent << "Base case: fibonacci(1) = 1\n";
        return 1;
    }

    int left = fibonacci(n - 1, depth + 1);
    int right = fibonacci(n - 2, depth + 1);
    int result = left + right;

    cout << indent << "Returning from: fibonacci(" << n << ") = " << result << "\n";
    return result;
}

int main() {
    int n = 3;
    int result = fibonacci(n);
    cout << "Result: " << result << endl;
    return 0;
}
