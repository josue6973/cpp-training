#include <iostream>
#include <string>
using namespace std;

int main() {
    string phrase;
    string vowels = "aeiouAEIOU";
    int vowelCount = 0;

    cout << "Enter a phrase: ";
    getline(cin, phrase);

    for (char &c : phrase) {
        if (vowels.find(c) != string::npos) {
            vowelCount++;
        }
        if (c == ' ') {
            c = '-';
        }
    }

    cout << "Total vowels: " << vowelCount << endl;
    cout << "New phrase: " << phrase << endl;

    return 0;
}