#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for max()

using namespace std;

int main() {
    vector<string> sentences{
        "Alice and Bob love leetcode",
        "I think so too",
        "This is great thanks very much"
    };

    int maxWord = 0;

    for (const string& se : sentences) {
        int wordCount = 1; // start from 1 for non-empty sentence
        for (char ch : se) {
            if (ch == ' ') wordCount++;
        }
        maxWord = max(wordCount, maxWord); // assign max value back
    }

    cout << maxWord << endl;

    return 0;
}
