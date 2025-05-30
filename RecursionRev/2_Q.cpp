#include <iostream>
using namespace std;

int sum(int n) {
    cout << "Entering: sum(" << n << ")\n";  // BEFORE recursion

    if (n == 0) {
        cout << "Base case reached: sum(0) = 0\n";
        return 0;
    }

    int result = n + sum(n - 1);  // Recursive call

    cout << "Returning from: sum(" << n << ") = " << result << "\n";  // AFTER recursion
    return result;
}

int main() {
    int n = 4;
    int total = sum(n);
    cout << "Total sum: " << total << endl;
    return 0;
}
