#include<iostream>
using namespace std;

int fact(int x){
    int fact=1;
    for(int i = 1; i<=x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
    int combination = fact(n)/(fact(n-r) * fact(r));

    return combination;
}

int main(){
    int num;
    cout<<"Enter the number of elements in a set: ";
    cin>>num;
     int flag = num;
    for(int i = 0 ; i<= num-1; i++){
        for(int k = 1; k<= flag - 1; k++){
            cout<<" ";
        }
        for (int j = 0;j <=i; j++) {
            cout<<combination(i,j)<<" ";
    }
    cout<<endl;
    flag--;
}
}