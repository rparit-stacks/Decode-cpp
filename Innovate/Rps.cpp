#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()

{
    int R = 0, P = 2, S;
    char user_input;
    cout << "Welcome to Rock, Paper, Scissors" << endl;
    cout << "Enter Only first word of \n\tRock(R) \n\tPaper(P) \n\tScissors(S) \nEnter your choice: ";
    cin >> user_input;

    int first = R > P;

    cout << first;
}