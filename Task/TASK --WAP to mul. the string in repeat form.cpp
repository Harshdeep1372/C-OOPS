// tp print like --- hellohellohello
#include <iostream>
#include <string>
using namespace std;
class Hello {
public:
     string operator*(int n)  
	{
        string result = "hello";
        for (int i = 1; i < n; i++) 
		{
            result =result + "hello";
        }
        return result;
    }
};

int main() 
{
    Hello h;
    cout << h * 3 << endl;
    return 0;
}






