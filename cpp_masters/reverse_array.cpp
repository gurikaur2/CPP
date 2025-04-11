#include <iostream>

using namespace std;

int main ()
{
    int arr[]={3,4,5,22,44};
    int n=5;
    int start=0,end =n-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start+=2;
        end-=2;
    }
    
    for (int i = 0; i <n;i++)
    {

        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}