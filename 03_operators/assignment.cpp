//WAP that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions. Update the original number using assignment operator.   

#include <iostream>

using namespace std;

int main ()
{
    int teabags;

    cout<<"Enter the number of tea bags= ";
    cin>> teabags;

    if (teabags<=10)
    {
        teabags=teabags+5;
        cout<<"Congratulations! You have total " << teabags << " tea bags"<< endl;
    }
    else
    {
        cout<< "You have total "<< teabags<<" tea bags."<<endl;
    }
    

    return 0;
}