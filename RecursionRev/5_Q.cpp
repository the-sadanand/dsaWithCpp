#include<iostream>
using namespace std;
void trace(int n) {
    cout << "Entering level: " << n << endl;
    if (n == 0) {
        cout << "Base case reached!\n";
        return;
    }
    int localVar = n * 10; // Unique to each call
    trace(n - 1);
    cout << "Returning to level: " << n << " with localVar = " << localVar << endl;
}
int main(){
    trace(6);
}