//WAP that checks if the user wants to order Green Tea. If the user types “Green Tea,” the program should confirm their order.

#include <iostream>
#include<string>

using namespace std;

int main ()
{
    string tea;

    cout<<"Enter your tea order: ";
    getline(cin,tea);

    if (tea=="Green Tea")
    {
        cout<< "You have ordered Green Tea."<<endl;

    }
    else
    {
        cout<<"Invalid choice."<<endl;
    }
    
    

    return 0;
}