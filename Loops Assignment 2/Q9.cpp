// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
#include<iostream>
using namespace std;
int main() {
    int l1,l2,l3;
    for(int i = 1; i<=500; i++)
    {
        if(i<10)
        {
            if((i*i*i)==i) cout<<i<<endl;
        }
        else if(i<100)
        {
            l1 = i%2;
            l2 = i/2;
            if((l1*l1*l1)==i) cout<<i<<endl;
        }
        else
        {
            int num = i;
            l1 = num%10;
            num = num/10;
            l2 =num%10;
            num = num/10;
            l3 = num;
            if((l1*l1*l1)+(l2*l2*l2)+(l3*l3*l3)==i) cout<<i<<endl;
        }
    }

    }

   

