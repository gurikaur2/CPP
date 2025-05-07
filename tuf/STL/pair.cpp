#include <bits/stdc++.h>

using namespace std;

/* void explainPairs()
{
    pair <int , int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;// prints 1 3 
} */

/* void explainPairs()
{
    pair<int , pair<int,int>> p={1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<< p.second.first<<endl; //prints 1 4 3
} */

void explainPairs()
{
    pair <int, int> arr[]={{1,2},{2,5},{5,1}};
    cout<< arr[2].second<<endl;//prints 1
}

int main ()
{
    explainPairs();
    return 0;
}