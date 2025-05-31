#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void limitedToppingPizza(int n, vector<int>& combo, unordered_set<int>& used) {
    if (n == 0) {
        for (int t : combo) cout << t << " ";
        cout << endl;
        return;
    }
    if (n < 0) return;

    for (int topping : {1, 2, 3}) {
        if (used.count(topping)) continue;  // Already used this topping

        used.insert(topping);
        combo.push_back(topping);
        limitedToppingPizza(n - topping, combo, used);
        combo.pop_back();
        used.erase(topping);
    }
}

int main() {
    int crustSize = 4;
    vector<int> combo;
    unordered_set<int> used;
    cout << "Combinations with unique topping sizes:\n";
    limitedToppingPizza(crustSize, combo, used);
    return 0;
}
