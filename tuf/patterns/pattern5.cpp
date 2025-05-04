#include <iostream>

using namespace std;

void pattern5(int n)
{
    for (int i = 1; i<=n ; i++)
    {
       
        for (int j = i; j >=1; j--)
        {
            cout<<"*";
        } 
        cout<<endl;
       
        
    }

    
}

int main ()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    pattern5(n);
    return 0;
}