/* A tea shop offers discounts based on the number of tea cups ordered. 
Write a program that checks the number of cups ordered and applies a discount:

i. More than 20 cups: 20% discount
ii. Between 10 and 20 cups: 10% discount
iii. Less than 10 cups: No discount */

#include <iostream>

using namespace std;

int main ()
{
    int cups;
    double unit_price=30, total, discount;

    cout<<"How many cups of tea would you like to have?"<<endl;
    cin>>cups;

    total= cups*unit_price;

    if (cups>20)
    {
        discount=0.20;
    }
    else if (cups<=20 && cups>=10)
    {
        discount=0.10;
    }
    else
    {
        discount=0;
    }

    total -= (total*discount);

    cout<<"Payable amount is= "<<total<<endl;

    
    return 0;
}