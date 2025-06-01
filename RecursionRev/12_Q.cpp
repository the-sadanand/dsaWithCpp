#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> numbers = {10, 20, 30, 40};

    cout << "Using count():\n";
    if (numbers.count(20)) {
        cout << "20 is in the set (count = " << numbers.count(20) << ")\n";
    } else {
        cout << "20 is not in the set (count = 0)\n";
    }

    if (numbers.count(50)) {
        cout << "50 is in the set\n";
    } else {
        cout << "50 is not in the set\n";
    }

    cout << "\nUsing find():\n";
    auto it = numbers.find(30);
    if (it != numbers.end()) {
        cout << "Found 30 using find(). Value = " << *it << endl;
    } else {
        cout << "30 not found using find().\n";
    }

    it = numbers.find(60);
    if (it != numbers.end()) {
        cout << "Found 60\n";
    } else {
        cout << "60 not found\n";
    }
    cout<<endl;
    

    return 0;
}
