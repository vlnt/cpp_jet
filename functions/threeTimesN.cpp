#include <iostream>

using namespace std;

void threeTN(int a, int& res);

int main()
{
    int result;
    for(int i = 0; i < 5; i++)
    {
       threeTN(i, result);
       cout << " The result is: " << result << endl;
    }
    
    return 0;
}

void threeTN(int a, int& b)
{
    b = 3 * a;
}