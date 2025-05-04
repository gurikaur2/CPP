#include <iostream>

using namespace std;

int main ()
{
    
    int arr[]={31,1,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   /*  int smallest=100;
    int second_smallest=99; */
    for (int i = n-1; i <= 0; i--)
    {
        if (smallest>arr[i])
        {
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if (second_smallest>arr[i] && second_smallest!=smallest)
        {
            second_smallest=arr[i];
        }
        
        
    }
    
   
cout<<second_smallest<<endl;
    return 0;
}