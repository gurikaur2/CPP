#include<iostream>
#include<climits>
using namespace std;

//parent class
class Vehicles{
    public:
    
    string color = "red";
    int noOfWheels= 4 ;
    string type =  "supercar";

    void print(){
        cout<<color<<"\t"<<noOfWheels<<"\t"<<type<<"\t";
    }


};

//child1
class Suzuki:public Vehicles
{
    
};

class car:public Vehicles
{

};

int main()
{
    Vehicles c1;
    Suzuki c2;
    car c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}
