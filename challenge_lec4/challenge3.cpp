//FAVOURITE TEA INPUT
//WAP that takes the user's favourite tea as input using getline and also asks how many cups of tea they want using cin. DIsplay the result in a fun message.
#include <iostream>
#include<string>

using namespace std;

int main ()
{
    string fav_tea;
    int tea_cups;

    cout<<"Which is yor favourite type of tea?"<<endl;
    getline(cin,fav_tea);

    cout<<"How many cups of "<<fav_tea<<"would you like?"<<endl;
    cin>>tea_cups;

    cout<< "You definitely have an awesome taste that is why you chose "<<fav_tea<<" ;)"<<endl;

    return 0;
}     