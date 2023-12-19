//Create a class named Book with attributes like title, author, and pages. Write a program to create two instances of the Book class and display their details.

#include<iostream>

using namespace std;

class books{
    
    public:
        string bookTitle;
        string bookAuthor;
        int bookPages;


};

int main()
{
    books book[2];

    for(int i = 0; i<2; i++){

        cout<<"Enter the name of the book "<<i+1<<" : ";
        getline(cin,book[i].bookTitle);
        cout<<"Enter the author's name of the book "<<i+1<<" : ";
        getline(cin,book[i].bookAuthor);
        cout<<"Enter the number of pages in the book "<<i+1<<" : ";
        cin>>book[i].bookPages;
    }

    cout<<"book which name "<<book[0].bookTitle<<" has "<<book[0].bookPages<<" Pages and author name is : "<<book[0].bookAuthor<<endl;
    cout<<"book which name "<<book[1].bookTitle<<" has "<<book[1].bookPages<<" Pages and author name is : "<<book[1].bookAuthor;





    
    

} 