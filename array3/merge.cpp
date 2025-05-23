#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2) {
    int i = 0, j = 0, k = 0;
    vector<int> v(v1.size() + v2.size());
    
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j]) {
            v[k++] = v1[i++];
        } else {
            v[k++] = v2[j++];
        }
    }
    
    // Copy any remaining elements from v1
    while (i < v1.size()) {
        v[k++] = v1[i++];
    }
    
    // Copy any remaining elements from v2
    while (j < v2.size()) {
        v[k++] = v2[j++];
    }
    
    return v;
}

int main() {
    vector<int> v1, v2;
    int n, m;
    
    cout << "Enter the size of the first vector: ";
    cin >> n;
    cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    
    cout << "Enter the size of the second vector: ";
    cin >> m;
    cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        v2.push_back(y);
    }
    
    // Sort the vectors to ensure the merge function works correctly
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    vector<int> v = merge(v1, v2);
    
    cout << "Merged vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
