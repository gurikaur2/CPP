//WAP to check whether a customer is eligible for a tea subscription discount.
//The discount applies if the user is either a student or has purchased more than 15 cups. 
//Ask the user to input their status (student or not) and their cup count.

#include <iostream>
#include<string>

using namespace std;

int main ()
{
    int teacups;
    string status;

    cout<<"Are you a student? ";
    getline(cin, status);

    cout<<"How many cups would you like to order? ";
    cin>> teacups;

    if (status== "yes" ||status == "Yes" || status == "YES" || teacups>15)
    {
        cout<<"You are eligible for tea subscription discount."<<endl;
    }
    else if (status == "no" ||status == "No" || status == "NO" || teacups<=15)
    {
        cout<<"You are not eligible for tea subscription discount."<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    
    
    
    return 0;
}