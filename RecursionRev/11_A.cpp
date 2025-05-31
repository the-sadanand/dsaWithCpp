#include <iostream>
using namespace std;

int countWays(int n) {
    if (n == 0) return 1;     // Found one valid way
    if (n < 0) return 0;      // Invalid path

    // Try placing 1, 2, or 3 inch topping
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int main() {
    int crustSize = 4;
    cout << "Total topping combinations for " << crustSize << " inches: ";
    cout << countWays(crustSize) << endl;
    return 0;
}
