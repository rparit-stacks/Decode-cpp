#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < sentence.length(); i++) {
        char character = sentence[i];
        
        if (isalpha(character)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}
