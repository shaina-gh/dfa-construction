#include <bits/stdc++.h>
using namespace std;

// Function to simulate DFA on input string
string check(vector<vector<int>>& re, vector<int>& final, string input) {
    int i = 0;
    int current = 0;

    while (i < input.size()) {
        if (input[i] == 'a') {
            current = re[current][0];  // Transition on 'a'
        } else if (input[i] == 'b') {
            current = re[current][1];  // Transition on 'b'
        } else {
            return "Rejected";  // Invalid character
        }
        i++;
    }

    // Check if current state is a final state
    if (find(final.begin(), final.end(), current) == final.end()) {
        return "Rejected";
    }

    return "Accepted";
}

int main() {
    // Regular expression: (a|b)*abb+
    vector<vector<int>> re = {
        {1, 0},  // State 0: a → 1, b → 0
        {1, 2},  // State 1: a → 1, b → 2
        {1, 3},  // State 2: a → 1, b → 3
        {1, 3}   // State 3: a → 1, b → 3 (looping final state)
    };

    vector<int> final = {3};  // Final/accepting state

    string input;
    cout << "Enter the string: ";
    cin >> input;

    cout << check(re, final, input) << endl;

    return 0;
}
