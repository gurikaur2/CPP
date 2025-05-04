#include <bits/stdc++.h>

using namespace std;

class hitman
{
    //default instances are private
    public:
    int noofkills=57;
    int health=23;

    //access modifier{setter,getter}
    char getch() //getter for printing
    {
        return ch;
    }
    void setch(char h)
    {
        ch=h;
    }
    

    private:
    char ch='a';
};

int main ()
{
    hitman agent47;
    cout<<"Health= "<<agent47.health<<endl;
    cout<<"No. of kills= "<<agent47.noofkills<<endl;
    cout<<"Weapons="<<agent47.getch()<<endl;
    //updation using setter
    agent47.setch('d');
    cout<<"Weapons owned="<<agent47.getch()<<endl;
    
    return 0;
}