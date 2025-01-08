#include <iostream>
#include<string>

using namespace std;

int main ()
{
    string userTea;
    int teaQuantity;

    cout<< "What would you like to order in Tea?";
    getline(cin, userTea);//getline command is used for taking inputs of STRING

    //Ask for Quantity
    cout <<"How many cups of "<<userTea<<" would you like to have?";
    cin >>teaQuantity;
    
    cout<<"Item name:"<<userTea<<" tea"<<endl;
    cout<<"Amount:"<<teaQuantity<<endl;


    return 0;
}