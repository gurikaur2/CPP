//MODIFY TEA PRICES
//WAP where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.                                  

#include <iostream>

using namespace std;

int main ()
{
    int base_price,new_price;
    float increment;

    cout<<"Enter the base price:";
    cin>>base_price;
    
    increment=base_price*0.1;
    new_price=base_price+increment;

    cout<<"New price will be: "<<new_price<<endl;


    return 0;
}