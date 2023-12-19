#include<iostream>
#include<vector>

using namespace std;

class cricket
{
    public:
    string name;
    int NoOfMatches;
    int NoOfTestMatches;
    int AvgRuns;
};

int main()
{

   cricket cricketer[3];

   for(int i = 0 ; i < 3; i++)
   {
    cout << "Enter the player's "<<i+1<<" Name : ";
    getline(cin,cricketer[i].name);

    cout<<"Enter the number of match player "<<i+1<<" played : ";
    cin>>cricketer[i].NoOfMatches;

    cout<<"Enter the number of test match player "<<i+1<<" played : ";
    cin>>cricketer[i].NoOfTestMatches;

    cout<<"Enter the Avg runs of player "<< i+1 <<" : ";
    cin>>cricketer[i].AvgRuns;

    cout<<endl;

    cin.ignore();

   }

    cout<<cricketer[0].name<<endl;
    cout<<cricketer[1].name<<endl;
    cout<<cricketer[2].name<<endl;
    
}