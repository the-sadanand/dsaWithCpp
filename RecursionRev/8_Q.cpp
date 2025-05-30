#include <iostream>
#include <vector>
using namespace std;

void findWays(int n, vector<int>& path) {
    if (n == 0) {
        // Reached the top, print the path
        for (int step : path) {
            cout << step << " ";
        }
        cout << endl;
        return;
    }
    if (n < 0) return; // Invalid path

    // Take 1 step
    path.push_back(1);
    findWays(n - 1, path);
    path.pop_back(); // Backtrack

    // Take 2 steps
    path.push_back(2);
    findWays(n - 2, path);
    path.pop_back(); // Backtrack
}

int main() {
    int n = 4;
    vector<int> path;
    cout << "Different ways to climb " << n << " steps:\n";
    findWays(n, path);
    return 0;
}
