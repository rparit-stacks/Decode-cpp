#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    int x = 3;
    int count=-1;

   vector<int> vec;

   vec.push_back(1);
   vec.push_back(4);
   vec.push_back(3);
   vec.push_back(3);
   vec.push_back(9);

   for(int i = vec.size()-1; i >= 0 ; i--)
   {
        if(vec[i]==x){ count = i;
        break;}
   }
   cout<<count;


}

