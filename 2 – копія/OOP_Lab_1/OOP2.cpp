
#include <iostream>
#include "Point.h"
using namespace std;





int main()
{
    Point a;
    
    a.Read();
    a.Display();
    cout << "middle of segment  " << a.tz1();  cout << ":" << a.tz2() << endl;
    a.tz3(); 
    
}