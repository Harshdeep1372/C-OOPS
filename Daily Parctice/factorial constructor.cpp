#include<stdlib.h>
#include<iostream>
using namespace std;

class Factorial
{
	public:
		int num;
    	int factorial = 1;
    	void calculateFactorial();
    	void show();
};

void Factorial::calculateFactorial()
{
    cout << "Enter a number : ";
    cin >> num;

    if (num == 0 || num == 1)
    {
        factorial = 1;
    }
    else
    {
       for(int i = 1; i <= num; ++i) {
            factorial *= i;
        }
    }
}

void Factorial::show()
{
    cout << "Factorial : " << factorial << endl;
}

main()
{
    Factorial fact;
    fact.calculateFactorial();
    fact.show();

	cout<<"\n";
	system("pause");
}
