// /* The program is checking whether a given character is a vowel or a consonant. */

#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';  // Initializing the variable with some value
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "The Character is Vowel";
    } else {
        cout << "The Character is Consonant";
    }
    return 0;
}