//WAP that calculates the total price of tea.
// inputs from user: number of cups, price per cup
//program functions: calculation of total price, apply a 5% discount IF the total is above a certain amount, and show the final price. 

#include <iostream>
#include<cmath>


using namespace std;

int main ()
{
    int tea_cups, unit_price;
    double total_price, final_price;

    cout<<"Enter the number of cups:"<<endl;
    cin>> tea_cups;

    cout<<"Enter the price per cup:"<<endl;
    cin>>unit_price;

    total_price=tea_cups*unit_price;
    final_price=total_price-(0.05*total_price);

    //Applying 5% discount on total price exceeding 100
    if (total_price>=100)
    {
        cout<<"Your total amount is = "<<final_price<<endl;
    }
    else
    {
        cout<<"Your total amount is = "<<total_price<<endl;
    }
    

    return 0;
}