#include <iostream>

using namespace std;

int main ()
{
    int n;
    int prod=1;
    int sum=0;
    cout<<"Enter the number:";
    cin>>n;
    while (n!=0)
    {

      int rem=n%10;
      
      prod=prod*rem;
      n=n/10;
      sum=sum+rem;
    }

  cout<<prod-sum;
    
    return 0;
}