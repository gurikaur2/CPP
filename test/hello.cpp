#include<iostream>

//METHOD 1 of using namespace concept
/* using namespace std;

int main()
{
    cout << "Hello Chai from Guri\n";
} */

//METHOD 2 of using namespace concept
/* int main()
{
    std::cout <<"Hello Chai from Guri" << std::endl;  
}
 */

//METHOD 3 of using namespace
using std::cout;
using std::endl;    
int main()
{
    cout <<"Hello Chai from Guri" << endl;
}
