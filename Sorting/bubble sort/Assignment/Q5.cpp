
// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.
#include<iostream>
#include<string>
using namespace std;


int main()
{

     string str= "zyxwvutsrqponmlkjihgfedcba"; 

     for(int i = 0; i < str.length()-1; i++)
     {
        for(int j = 0; j<str.length()-1-i; j++)
        {
            if(str[j]>str[j+1]) swap(str[j], str[j+1]);
        }
     }

     for(char element : str)
        cout<<element<<" ";


}