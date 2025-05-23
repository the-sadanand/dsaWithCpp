#include<iostream>
#include<vector>
using namespace std;

void display(const vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void arrange(vector<int>& v, int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        // Find the next 1 from the left
        if (i < j && v[i] == 0) i++;
        // Find the next 0 from the right
        if (i < j && v[j] == 1) j--;
        // Swap
        if (v[i]==1&&v[j]==0) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v = {0, 1, 0, 1, 1, 0, 1};
    int n = v.size(); // Automatically determines the size of the vector

    arrange(v, n);
    display(v, n);

    return 0;
}
