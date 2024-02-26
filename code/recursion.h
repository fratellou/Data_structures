#ifndef RECURSION_H
#define RECURSION_H

#include <iostream>
#include <vector>
using namespace std;

// A recursive function to generate all combinations
void generateCombinations(const vector<string>& FSB, int k, vector<string>& combination, int start) {
    // If we have recruited the right number of combination size, we output the command
    if ((int)combination.size() == k) {
        for (const auto& agency : combination) {
            cout << agency << " ";
        }
        cout << endl;
        return;
    }

    // Recursively generating combinations starting from the current index
    for (int i = start; i < (int)FSB.size(); ++i) {
        combination.push_back(FSB[i]);
        generateCombinations(FSB, k, combination, i + 1);
        combination.pop_back();
    }
}
#endif