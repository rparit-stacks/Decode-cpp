#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class player
{
private:
    int health, score, id;

public:
    void sethealth(int health)
    {
        this->health = health;
    }

    void setscore(int score)
    {
        this->score = score;
    }

    void setid(int id)
    {
        this->id = id;
    }

    int getheath()
    {
        return health;
    }

    int getid()
    {
        return id;
    }

    int getscore()
    {
        return score;
    }
};

//player type function which gives the player in return.
player CheckMaxScore(player a, player b)
{
    if(a.getscore()>b.getscore())
        return a;
    else 
        return b;
}

int main()
{
    player rohit, nitin, samyak;

    rohit.setscore(10);
    rohit.sethealth(90);
    rohit.setid(83674);

    nitin.setscore(100);
    nitin.sethealth(80);
    nitin.setid(8367);

    

    samyak = CheckMaxScore(rohit, nitin);
    cout<<samyak.getheath()<<endl;
    cout<<samyak.getid();

    return 0; 
}
