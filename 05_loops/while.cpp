/* Write a program that keeps track of tea orders. 
Each time a cup of tea is made, decrease the number of cups remaining. 
The loop should run until all cups are served. */

#include <iostream>

using namespace std;

int main ()
{
    int cups;

    cout<<"How many cups of tea would you like?";
    cin>>cups;

     while (cups>0)
     {
        cout<<"Serving a cup of tea.\n"<<cups<<" cups are remaining."<<endl;
        cups--;
     }

     cout<<"All cups are served."<<endl;
     
    
    return 0;
}