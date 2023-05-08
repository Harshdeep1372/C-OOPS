#include <iostream>


class SuperClass
{
    public:

        SuperClass(int foo)
        {
	
		 
        }
};
class SubClass : public SuperClass
{
    public:

        SubClass(int foo, int bar)
        : SuperClass(foo)    // Call the superclass constructor in the subclass' initialization list.
        {
               
        }
};

class Foo
{
        public:
        Foo( int x ) 
        {
                std::cout << "Foo's constructor " 
                          << "called with " 
                          << x 
                          << std::endl; 
        }
};
class Bar : public Foo
{
        public:
        Bar() : Foo( 10 )  // construct the Foo part of Bar
        { 
                std::cout << "Bar's constructor" << std::endl; 
        }
};
int main()
{
		
        Bar stool;
}
