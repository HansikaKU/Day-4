#include <iostream>
using namespace std;

int main() {
    string words[] = {"dog", "apple", "cat"};
    int n = 3;  // number of words

    char smallest = 'z';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < words[i].length(); j++) {
            if (words[i][j] < smallest) {
                smallest = words[i][j];
            }
        }
    }

    cout << "Smallest letter in all words: " << smallest << endl;

    return 0;
}