//WAP that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.

#include <iostream>

using namespace std;

int main ()
{
    int hour;

    cout<<"Enter the current hour int 24 hour format: ";
    cin>> hour;

    if (hour>=8 && hour<=18)
    {
       cout<<"Tea shop is open."<<endl;
    }
    else if (hour<8 && hour>18 )
    {
        cout<<"Tea shop is closed."<<endl;
    }
    else
    {
        cout<<"Invalid hour entered."<<endl;
    }
    
    
    
    


    return 0;
}