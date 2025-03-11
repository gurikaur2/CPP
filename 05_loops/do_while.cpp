/* Create a program that asks the user if they want more tea. 
Keep asking them until they type “no” (case-insensitive), using a do-while loop.*/

#include <iostream>
#include<string>

using namespace std;

int main ()
{
    string tea;

do
{
    cout<<"Would you like more tea?";
    getline(cin,tea);
    
} while ((tea != "no") && (tea != "No"));

cout<<"Thank you for visiting us!"<<endl;

    return 0;
}