#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int counter=0;



void FindDuplicate(vector<int>& vec)
{
    sort(vec.begin(), vec.end());

    for(int i = 0 ; i < vec.size(); i++)
    {
        counter++;
        if(vec[i+1]== vec[i])
        {
            counter++; 
            cout<<vec[i+1];
            break;
        }
        
    }

}

int main()
{
    vector<int> vec = {6,3,2,4,1,7,1,5};

    FindDuplicate(vec);
    cout<<endl<<counter;

}
