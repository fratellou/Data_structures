#include "recursion.h"
using namespace std;

int main() {
    // The structure of the FSB
    vector<string> FSB = {"NAC", "SCR", "SZKSBT", "NTS", "SEB", "SIMS", "OPWS", "AS", "M", "USB", "CS"};
    int n = 7; // Combination size

    // Vector for storing the current combination
    vector<string> combination;

    // Generating all combinations
    generateCombinations(FSB, n, combination, 0);

    return 0;
}