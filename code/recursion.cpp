#include "recursion.h"
using namespace std;

int main() {
  // The structure of the FSB
  vector<string> FSB = {"NAC",  "SCR", "SZKSBT", "NTS", "SEB", "SIMS",
                        "OPWS", "AS",  "M",      "USB", "CS"};
  int n = 7;  // Combination size

  // Vector for storing the current combination
  vector<string> combination;

  // Generating all combinations
  generateCombinations(FSB, n, combination, 0);

  return 0;
}

// A recursive function to generate all combinations
void generateCombinations(const vector<string>& FSB, int k,
                          vector<string>& combination, int start) {
  // If we have recruited the right number of combination size, we output the
  // command
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