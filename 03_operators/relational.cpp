//Customers who buy more than 20 cups of tea get a special "GOLD" badge, and those who buy 10-20 cups get a "SILVER" badge.
// WAP to display the badge they will receive based on the number of cups they buy.

#include <iostream>

using namespace std;

int main ()
{
    int teacups;

    cout<<"Enter number of tea cups=";
    cin >> teacups;

    if (teacups>20)
    {
        cout<<"Congratulations! You have been rewarded with 'GOLD' badge."<<endl;
    }
    else if (teacups >= 10 && teacups <= 20)
    {
        cout << "Congratulations! You have been rewarded with 'SILVER' badge." << endl;
    }
    else
    {
        cout<< "You are not eligible for getting any badges. Better luck next time!"<<endl;
    }
    
    


    
    
    return 0;
}