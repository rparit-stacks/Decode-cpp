//Write a program to count the minimum number of notes in a given amount using the switch statement.
//Input 1: 510

#include<iostream>
using namespace std;
int main()
{
    int amount,note_500,note_100,note_50,note_10,remains;
    cout<<"Enter an Amount : ";
    cin>>amount;
    switch(amount > 500) 
    {
        case 1:
        note_500 = amount/500;
        amount = amount - (note_500 * 500);
        break;    
    }
    switch(amount > 100)
    {
        case 1:
        note_100=amount /100 ;
        amount = amount - (note_100 * 100);
        break;
    }
    switch (amount > 50)
    {
        case 1:
        note_50=amount/50;
        amount = amount - (note_50 * 50);
        break;
    }
    switch (amount>10)
    {
        case 1:
        note_10=amount/10;
        break;
    }
    if (note_500 > 0)
    {
        cout<<"there are "<<note_500<<" notes of 500";
    }
    else if (note_100 > 0)
    {
        cout<<"there are "<<note_100<<" notes of 100";
    }
    else if (note_50 > 0)
    {
        cout<<"there are "<<note_50<<" notes of 50";
    }
    if (note_10 > 0)
    {
        cout<<"there are "<<note_10<<" notes of 10";
    }
    
  

    return 0;
}