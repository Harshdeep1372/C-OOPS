#include<stdlib.h>
#include<iostream>
using namespace std;

class BaseClass
{
public:
    virtual void Display()
    {
        cout << "\nThis is Display() method"
                " of BaseClass";
    }
    void Show()
    {
        cout << "\nThis is Show() method "
               "of BaseClass";
    }
};
 
class DerivedClass : public BaseClass
{
public:
    // Overriding method - new working of
    // base class display method
    void Display()
    {
        cout << "\nThis is Display() method"
               " of DerivedClass";
    }
};
 
// Driver code
main()
{
    DerivedClass dr;
    BaseClass &bs = dr;
    bs.Display();
    dr.Show();
    
    cout<<"\n";
    system("pause");
}
