#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class books{

public:

    string name;
    int price;
    int no_pages;

    int count =0;

    int count_books(int amount)
    {
        if(price<amount) return 1;
        else return 0;
    }
    bool Isbookpresent(string bookname)
    {
        if(name == bookname) return true;
        else return false;
    }

};

int main()
{
    books book1;

    cout<<"Enter the name of the book 1 : ";
    cin>>book1.name;
    cout<<"Enter the price of the book 1 : ";
    cin>>book1.price;

    cout<<book1.count_books(600);
    cout<<book1.Isbookpresent("spacex");
}