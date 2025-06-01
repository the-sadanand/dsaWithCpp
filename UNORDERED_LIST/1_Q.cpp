#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> mySet;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mySet.insert(x);  // inserts only unique values
    }

    cout << "\nElements in the unordered_set:\n";
    for (int x : mySet) {
        cout << x << " ";
    }

    return 0;
}
