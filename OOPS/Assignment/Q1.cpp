// Q1. Create a class ‘date’ that contains three members namely date, month and
// year. Create 2 objects of this class with different dates and now compare the
// two. If the dates are equal then display message as "Equal" otherwise
// "Unequal". Use Getters & Setters. *Note : The function should be a member
// function of this class.

#include <bits/stdc++.h>

#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date {
private:
    int date;
    int month;
    int year;

public:
    Date(int date, int month, int year) : date(date), month(month), year(year) {
    }

    void compare(Date obj2) {
        if (this->date == obj2.date && this->month == obj2.month &&
            this->year == obj2.year)
            cout << "Equal" << endl;
        else
            cout << "Unequal";
    }
};

int main() {
    Date date(22, 06, 2003), date2(22, 06, 2003);

    date.compare(date2);

    return 0;
}