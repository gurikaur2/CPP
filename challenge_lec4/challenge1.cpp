//TEA INFORMATION DETAIL
//WAP that declares variables to store the type of tea, its price per kg, and its rating. Also print them in a formatted output using escape sequences.


#include <iostream>
#include<string>

using namespace std;

int main ()
{
    string tea_type= "Masala Tea";
    float price= 100.55;
    char tea_quality='B';

    cout << "Type of tea:"<< tea_type<<"\n";
    cout <<"Price of tea per kg:"<<price<<"\n";
    cout <<"Ratings given by users:"<<tea_quality<<"\n";


    return 0;
}